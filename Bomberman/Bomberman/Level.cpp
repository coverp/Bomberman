#include "Level.h"


Level::Level(int newLevel)
{
	level = newLevel;
	setPowerUp();
	setBonusItem();
	setNumofSoftBlocks();
	setNumOfEnemies();
	softBlocksBroken = 0;
	enemiesDefeated = 0;
	int enemyArray[8][50] =
	{
		{ 6, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 3, 2, 1, 4, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 3, 1, 1, 0, 0, 0, 0, 2, 1, 1, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 2, 2, 3, 3, 3, 2, 1, 1, 2, 1, 3, 0, 1, 0, 5, 0, 3, 1, 0, 4, 2, 1, 1, 1, 0, 3, 0, 3, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 2, 0, 2, 0, 4, 4, 1, 3, 1, 3, 0, 3, 3, 0, 0, 0, 1, 0, 3, 2, 1, 1, 1, 0, 3, 0, 2, 2, 3, 2, 3, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 2, 0, 1, 3, 1, 4, 3, 0, 3, 4, 2, 0, 0, 2, 4, 1, 2, 4, 2, 2, 5, 1, 2, 1, 2, 4, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 7, 0, 0, 0, 0, 1, 1, 3, 0, 2, 2, 2, 1, 1, 0, 5, 2, 2, 0, 1, 0, 1, 0, 1, 0, 2, 0, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 0, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 6, 6, 6, 6, 5 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2 },
	};
	setLevelEnemies();
}


Level::~Level()
{
}

void Level::setPowerUp()
{
	if (level == 1 || level == 7 || level == 15 || level == 27 || level == 38)
		powerUp = 1;//flame	
	else if (level == 2 || level == 5 || level == 6 || level == 11 
		|| level == 12 || level == 17 || level == 19 || level == 23 || level == 28 
		|| level == 32)
		powerUp = 2;//bombs
	else if (level == 3 || level == 8 || level == 13 || level == 20 || level == 22 
		|| level == 24 || level == 29 || level == 33 || level == 37 || level == 41 
		|| level == 44 || level == 48)
		powerUp = 3;//detonator
	else if (level == 4)
		powerUp = 4;//speed
	else if (level == 9 || level == 14 || level == 18 || level == 21 || level == 25 
		|| level == 35 || level == 43 || level == 47)
		powerUp = 5;//bombpass	
	else if (level == 10 || level == 16 || level == 31 || level == 39 || level == 42 
		|| level == 46)
		powerUp = 6;//wallpass
	else if (level == 30 || level == 36 || level == 49)
		powerUp = 7;//flamepass
	else
		powerUp = 8;//mystery_>setPowerUP(random num)
	return;
}

void Level::setBonusItem()
{
	if (level == 6 || level == 8 || level == 14 || level == 16 || level == 22
		|| level == 24 || level == 30 || level == 32 || level == 38 || level == 40
		|| level == 46 || level == 48)
		bonusItem = 1;//BPanel
	else if (level == 1 || level == 7 || level == 9 || level == 15 || level == 17
		|| level == 23 || level == 25 || level == 31 || level == 33 || level == 39
		|| level == 41 || level == 47 || level == 49)
		bonusItem = 2;//Goddess
	else if (level == 4 || level == 12 || level == 20 || level == 28 || level == 36
		|| level == 44)
		bonusItem = 3;//Cola
	else if (level == 3 || level == 11 || level == 19 || level == 27 || level == 35 
		|| level == 43)
		bonusItem = 4;//Famicom
	else if (level == 2 || level == 10 || level == 18 || level == 26 || level == 34 
		|| level == 42 || level == 50)
		bonusItem = 5;//Nakamotto
	else
		bonusItem = 6;//Dezeniman
	return;
}

void Level::setNumofSoftBlocks()
{
	softBlocksSpawned = 40 + (level * 2);
	return;
}


void Level::setNumOfEnemies()
{
	return;
}


void Level::enemyDefeated()
{
	enemiesDefeated++;
}


void Level::blockBroke()
{
	softBlocksBroken++;
}


int* Level::getEnemies()
{
	return levelEnemies;
}


int Level::getLevel()
{
	return level;
}

int Level::getPowerUp()
{
	return powerUp;
}

int Level::getBonusItem()
{
	return bonusItem;
}


int Level::getEnemiesDefeated()
{
	return enemiesDefeated;
}


int Level::getEnemiesSpawned()
{
	return enemiesSpawned;
}

bool Level::getRemoteUsed()
{
	return remoteUsed;
}


int Level::getChain()
{
	return chain;
}


void Level::setChain(int length)
{
	chain = length;
}

int Level::getSoftBlocksBroken()
{
	return softBlocksBroken;
}


int Level::getSoftBlockSpawned()
{
	return softBlocksSpawned;
}


void Level::setLevelEnemies()
{
	for (int i = 0; i < 8; i++)
	{
		levelEnemies[i] = enemyArray[i][level];
	}

}
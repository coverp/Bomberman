#pragma once
class Level
{
public:
	Level(int);
	~Level();
	void setNumOfEnemies();
	void setPowerUp();
	void setBonusItem();
	void setNumofSoftBlocks();
	void enemyDefeated();
	void blockBroke();
	int* getEnemies();
	int getLevel();
	int getPowerUp();
	int getBonusItem();
	int getEnemiesDefeated();
	int getEnemiesSpawned();
	bool getRemoteUsed();
	int getChain();
	void setChain(int);
	int getSoftBlocksBroken();
	int getSoftBlockSpawned();

private:
	int level;
	int numBallom;
	int numONeal;
	int numDahl;
	int numMinvo;
	int numDoria;
	int numOvape;
	int numPass;
	int numPotan;
	int powerUp;
	int bonusItem;
	int enemiesDefeated;//number of enemies killed this stage
	int enemiesSpawned;//enemies spawed in the stage
	//Timer walkTime;//how long the d-pad has been pressed down for
	int chain;//how many explosions have been caused by other explosions
	bool remoteUsed;
	int softBlocksBroken;//tracks the number of soft blocks broken
	int softBlocksSpawned;//tracks the number of soft blocks spawned
	int enemies[50][8];
};


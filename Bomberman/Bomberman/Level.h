#pragma once
class Level
{
public:
	Level(int);
	~Level();
	void setEnemy();
	void setPowerUp();
	void setBonusItem();
	void setNumofSoftBlocks();
	
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
	int bounusItem;

	int enemiesDefeated;//number of enemies killed this stage
	int enemiesSpawed;//enemies spawed in the stage
	Timer walkTime;//how long the d-pad has been pressed down for
	int chain;//how many explosions have been caused by other explosions
	bool remoteUsed;
	int softBlocksBroken;//tracks the number of soft blocks broken
	int softBlocksSpawned;//tracks the number of soft blocks spawned

};


#include "Level.h"


Level::Level(int newLevel)
{
	level = newLevel;
	setPowerUp();
	setBonusItem();
	setNumofSoftBlocks();
	numBallom = 0;
	numONeal = 0;
	numDahl = 0;
	numMinvo = 0;
	numDoria = 0;
	numOvape = 0;
	numPass = 0;
	numPotan = 0;
	
}


Level::~Level()
{
}

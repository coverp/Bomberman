#pragma once
#include "Level.h"
class Game
{
public:
	Game();
	~Game();
	void menuScreen();
	bool isGameOver();
	void step();//move one frame


private:
	Level level;
	bool gameOver;

};


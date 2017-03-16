#pragma once
#include "Character.h"
class Player :
	public Character
{
public:
	Player();
	~Player();

private:
	int points, lives, bombs;
	bool remote, bombPass, flamePass, invincible;
	void dropBomb();
	enum direction:int{ left = 1, up = 2, right = 3,down=4 };
	direction direction;
	void move(int direction);
};


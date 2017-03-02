#pragma once
#include "Character.h"
class Player :
	protected Character
{
public:
	Player();
	~Player();

private:
	int points, lives, bombs;
	bool remote, bombPass, flamePass, invincible;
	void dropBomb();
};


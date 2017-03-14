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
};


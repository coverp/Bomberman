#pragma once
#include "Character.h"
class Player :
	protected Character
{
public:
	Player();
	~Player();

private:
	int points;
	int lives;
	int bombs;
	bool remote;
	bool bombPass;
	bool flamePass;
	bool invincible;

	void dropBomb();
};


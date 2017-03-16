#pragma once
#include "Character.h"
class Enemy :
	public Character
{
public:
	Enemy();
	~Enemy();

private:
	bool isAlive;
	int score;
};


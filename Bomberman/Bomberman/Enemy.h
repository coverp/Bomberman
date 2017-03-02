#pragma once
#include "Character.h"
class Enemy :
	protected Character
{
public:
	Enemy();
	~Enemy();

private:
	bool isAlive;
	int score;
};


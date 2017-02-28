#pragma once
#include "Character.h"
class Enemy :
	protected Character
{
public:
	Enemy();
	~Enemy();

protected:
	bool isAlive;
	int score;

};


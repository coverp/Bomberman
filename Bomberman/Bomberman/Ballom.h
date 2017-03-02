#pragma once
#include "Enemy.h"
class Ballom :
	protected Enemy
{
public:
	Ballom();
	~Ballom();

private:
	bool softPass = false;
	void move(double);
};


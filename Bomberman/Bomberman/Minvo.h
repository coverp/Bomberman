#pragma once
#include "Enemy.h"
class Minvo :
	protected Enemy
{
public:
	Minvo();
	~Minvo();

private:
	bool softPass = false;
	void move(double);
};


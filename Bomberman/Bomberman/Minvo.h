#pragma once
#include "Enemy.h"
class Minvo :
	public Enemy
{
public:
	Minvo();
	~Minvo();

private:
	bool softPass = false;
	void move(double speed);

};


#pragma once
#include "Enemy.h"
class Dahl :
	protected Enemy
{
public:
	Dahl();
	~Dahl();

private:
	bool softPass = false;
	void move(double);
};


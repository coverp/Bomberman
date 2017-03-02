#pragma once
#include "Enemy.h"
class Dahl :
	protected Enemy
{
public:
	Dahl();
	~Dahl();

	bool softPass = false;

	void move(double speed);

};


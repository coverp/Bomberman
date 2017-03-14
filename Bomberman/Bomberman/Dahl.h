#pragma once
#include "Enemy.h"
class Dahl :
	public Enemy
{
public:
	Dahl();
	~Dahl();

	bool softPass = false;

	void move(double speed);

};


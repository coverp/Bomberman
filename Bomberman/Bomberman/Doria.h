#pragma once
#include "Enemy.h"
class Doria :
	public Enemy
{
public:
	Doria();
	~Doria();

private:
	bool softPass = true;
	void move(double speed);

};


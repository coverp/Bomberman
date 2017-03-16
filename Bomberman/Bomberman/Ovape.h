#pragma once
#include "Enemy.h"
class Ovape :
	public Enemy
{
public:
	Ovape();
	~Ovape();

private:
	bool softPass = true;
	void move(double speed);

};


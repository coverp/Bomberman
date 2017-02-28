#pragma once
#include "Enemy.h"
class Ovape :
	protected Enemy
{
public:
	Ovape();
	~Ovape();

private:
	bool softPass = true;
	void move(double);
};


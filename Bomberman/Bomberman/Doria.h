#pragma once
#include "Enemy.h"
class Doria :
	protected Enemy
{
public:
	Doria();
	~Doria();

private:
	bool softPass = true;
	void move(double);
};


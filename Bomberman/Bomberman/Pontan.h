#pragma once
#include "Enemy.h"
class Pontan :
	protected Enemy
{
public:
	Pontan();
	~Pontan();

private:
	bool softPass = true;
	void move(double speed);

};


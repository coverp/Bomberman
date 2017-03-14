#pragma once
#include "Enemy.h"
class Pontan :
	public Enemy
{
public:
	Pontan();
	~Pontan();

private:
	bool softPass = true;
	void move(double speed);

};


#pragma once
#include "Enemy.h"
class Pass :
	public Enemy
{
public:
	Pass();
	~Pass();

private:
	bool softPass = true;
	void move(double speed);

};


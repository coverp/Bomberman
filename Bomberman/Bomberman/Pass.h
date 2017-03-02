#pragma once
#include "Enemy.h"
class Pass :
	protected Enemy
{
public:
	Pass();
	~Pass();

private:
	bool softPass = true;
	void move(double speed);

};


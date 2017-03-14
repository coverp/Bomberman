#pragma once
#include "Enemy.h"
class ONeal :
	public Enemy
{
public:
	ONeal();
	~ONeal();

private:
	bool softPass = false;

	void move(double speed);


};


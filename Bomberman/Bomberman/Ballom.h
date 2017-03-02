#pragma once
#include "Enemy.h"
class Ballom :
	protected Enemy
{
public:
	Ballom();
	~Ballom();

	bool softPass = false;

	void move(double speed);
private:
	//softPass = false;
//	void move(double);
};


#pragma once
#include "Enemy.h"
class Ballom :
	public Enemy
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


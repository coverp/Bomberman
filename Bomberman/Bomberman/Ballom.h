#pragma once
#include "Enemy.h"
class Ballom :
	protected Enemy
{
public:
	Ballom();
	~Ballom();

<<<<<<< HEAD
	bool softPass = false;

	void move(double speed);
=======
private:
	bool softPass = false;
	void move(double);
>>>>>>> origin/Class-Framework
};


#pragma once
#include"Items.h"
class PowerUps :
	public Items
{
public:
	PowerUps();
	~PowerUps();

	void spawnedEnemy(double, double);
	void pickedUp();
	void die() {}

private:
	int type;
};


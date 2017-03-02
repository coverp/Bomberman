#pragma once
#include"Items.h"

class Bomb :
	public Items
{
public:
	Bomb();
	~Bomb();

	bool lengthReached();
private:
	int length, direction;
};


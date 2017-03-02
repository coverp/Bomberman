#pragma once
#include"Object.h"

class Explosion :
	public Object
{
public:
	Explosion();
	~Explosion();
	bool lengthReached();
private:
	int length;
	int direction;//0 center, 1 up, 2 right, 3 down, 4 left

};


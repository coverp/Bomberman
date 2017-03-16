#pragma once
#include "Object.h"
class Character :
	public Object
{
public:
	Character();
	~Character();

private:
	bool softPass;
	double speed;
	virtual void move(double speed) {};
};


#pragma once
#include "Object.h"
class Character :
	protected Object
{
public:
	Character();
	~Character();

protected:
	bool softPass;
	double speed;
	
	virtual void move(double) {};
};


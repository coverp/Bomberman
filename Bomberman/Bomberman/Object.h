#pragma once
#include<string>
class Object
{
public:
	Object();
	~Object();

private:
	double xCoord, yCoord, size;
	std::string sprite;
	virtual void die() {}
	void collision(Object*) {}

};


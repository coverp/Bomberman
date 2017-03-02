#pragma once
#include<string>
class Object
{
public:
	Object();
	Object(std::string, int, int, int);
	~Object();

private:
	double xCoord, yCoord, size;
	std::string sprite;
	virtual void die() {}
	void collision(Object*) {}
	void loadSprite();
};


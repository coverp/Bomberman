#pragma once
#include<string>
class Object
{
public:
	Object();
	~Object();

protected:
	double xCoordinate;
	double yCoordinate;
	std::string sprite;
	double size;

	void die();
	void collision(Object*);
};


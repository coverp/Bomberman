#pragma once
#include "MapObjects.h"
class Door :
	public MapObjects
{
public:
	Door();
	~Door();

	bool isUncovered();
};


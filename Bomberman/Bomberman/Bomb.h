#pragma once
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


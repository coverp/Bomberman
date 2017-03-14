#pragma once
#include<string>
#include <SFML/Graphics.hpp>
class Object
{
public:
	Object();
	Object(std::string, float, float, float);
	~Object();

	sf::Sprite getSprite();

private:
	float xCoord, yCoord, size;
	std::string spriteName;
	sf::Texture texture;
	sf::Sprite sprite;
	virtual void die() {}
	void collision(Object*) {}
	void loadSprite();
};


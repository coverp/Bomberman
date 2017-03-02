#include "Object.h"
#include <SFML/Graphics.hpp>

Object::Object()
{
}


Object::Object(std::string spriteName, int x, int y, int objectSize)
{
	sprite = spriteName;
	xCoord = x;
	yCoord = y;
	size = objectSize;
}

Object::~Object()
{
}


void Object::loadSprite()
{
	sf::Texture texture;

	
}
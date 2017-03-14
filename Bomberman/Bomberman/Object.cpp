#include "Object.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Object::Object()
{
}


Object::Object(std::string sprite, float x, float y, float objectSize)
{
	spriteName = sprite;
	xCoord = x;
	yCoord = y;
	size = objectSize;

	loadSprite();
}

Object::~Object()
{
}


void Object::loadSprite()
{
	if (!texture.loadFromFile(spriteName + ".png"))
		std::cout << "Error loading image file" << std::endl;

	sprite.setTexture(texture);	

	sprite.setPosition(xCoord, yCoord);
}


sf::Sprite Object::getSprite()
{
	return sprite;
}
#include "Game.h"
#include"SFML/Window.hpp"
#include"SFML/Graphics.hpp"
#include"Player.h"

Game::Game()
{
}


Game::~Game()
{
}

int Game::run()
{
	//Create the window (because we have a view this will be the whole game map)
	sf::RenderWindow gameWindow(sf::VideoMode(500, 500), "Bomberman");
	gameWindow.setFramerateLimit(60);

	//Create the view to use as the game window
	sf::View view(sf::FloatRect(0, 0, 200, 200));

	srand(time(NULL));

	// run the game and check for inputs
	while (gameWindow.isOpen())
	{
		
		sf::Event event;
		while (gameWindow.pollEvent(event))
		{
			//If the x is pressed close the window
			if (event.type == sf::Event::Closed)
			{
				gameWindow.close();

				//1 is returned if the game window is closed prematurely
				return 1;
			}

			//Move left if the left arrow key is pressed
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{

			}

			//Move up if the up arrow key is pressed
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{

			}

			//Move right if the right arrow key is pressed
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{

			}

			//Move down if the down arrow key is pressed
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{

			}

			//Drop a bomb if the Z key is pressed
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
			{
				
			}

			//Detonate a bomb if the X key is pressed and the detonator is available
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
			{
				
			}
		}

		//Draw everything
		gameWindow.clear();
		gameWindow.display();
		gameWindow.setView(view);
	}

	return 0;
}
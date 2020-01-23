#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

}

Level::~Level()
{
	input = nullptr;
}

// handle user input
void Level::handleInput()
{

	
		if (input->isKeyDown(sf::Keyboard::J) && input->isKeyDown(sf::Keyboard::K)&& input->isKeyDown(sf::Keyboard::L))
		{

			input->setKeyUp(sf::Keyboard::J);
			input->setKeyUp(sf::Keyboard::K);
			input->setKeyUp(sf::Keyboard::L);

			std::cout << "J , K , L is pressed at the same time\n";

		}

			if (input->isKeyDown(sf::Keyboard::Escape))
			{
				window->close();
			}
	
	
}

// Update game objects
void Level::update()
{

}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
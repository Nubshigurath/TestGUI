#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game_Screen.h"

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);

	Game_Screen *game = new Game_Screen;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left) {

					cout << "fwsgegsdvaesd";
				}
			}
		}

		window.clear();
		game->draw(&window);
		window.display();
	}

	return 0;
}
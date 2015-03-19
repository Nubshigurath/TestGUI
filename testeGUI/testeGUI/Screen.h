#ifndef SCREEN_H
#define SCREEN_H

#include "SFML\Graphics.hpp"

class Screen {

public:

	virtual void draw(sf::RenderWindow *_main_window) = 0;
	virtual	void update() = 0;
	virtual void handle_input() = 0;

};

#endif
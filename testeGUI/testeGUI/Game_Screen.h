#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include "Screen.h"

class Game_Screen : public Screen {

private:

	sf::Texture scenery_image;
	sf::Sprite background;
	
public:

	Game_Screen();
	~Game_Screen();

	void draw(sf::RenderWindow *_main_window);
	void update();
	void handle_input();

};

#endif
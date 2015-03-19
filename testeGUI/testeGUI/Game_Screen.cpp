#include "Game_Screen.h"


Game_Screen::Game_Screen() {

	scenery_image.loadFromFile("image.jpg");
	background.setTexture(scenery_image);

}


Game_Screen::~Game_Screen() {
}


void Game_Screen::draw(sf::RenderWindow *_main_window) {

	_main_window->draw(background);

}


void Game_Screen::update() {

}


void Game_Screen::handle_input() {

}
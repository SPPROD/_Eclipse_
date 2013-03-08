#pragma once 
#include "Graphics.h"

void Graphics::init(Game *game){
	_game = game;
}

void Graphics::draw(sf::Sprite& Sprite){
	_game->getWindow().draw(Sprite);
}
void Graphics::draw(sf::RenderWindow &RW,sf::Sprite& Sprite){
	RW.draw(Sprite);
}
void Graphics::draw(sf::RenderTexture &RW,sf::Sprite& Sprite){
	RW.draw(Sprite);
	sf::Sprite s;
}

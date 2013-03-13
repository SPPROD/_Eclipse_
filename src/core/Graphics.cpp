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
sf::Sprite Graphics::loadSprite(std::string img){
	sf::Texture Tmp;
	static sf::Texture Texture = Tmp;
	sf::Sprite spr;
	Texture.loadFromFile(img);

	spr.setTexture(Texture);

	return spr;
}

sf::Sprite Graphics::loadSprite(sf::Texture img){
	sf::Sprite spr;
	spr.setTexture(img);
	return spr;
}
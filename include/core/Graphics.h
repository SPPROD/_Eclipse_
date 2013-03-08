#pragma once
#include "Include.h"
#include "Game.h"
class Game;
class Graphics{
public:
	void init(Game *game);
	void draw(sf::Sprite& Sprite);//sf::RenderTexture render;render.create(dimensionX, dimensionY);
	void draw(sf::RenderWindow &RW,sf::Sprite& Sprite);
	void draw(sf::RenderTexture &RW,sf::Sprite& Sprite);
	void rotate();
	void move();
	void scale();
	sf::Sprite loadSprite(std::string img);
	sf::Sprite loadSprite(sf::Texture img);
	void flip();
private:
	Game *_game;
};
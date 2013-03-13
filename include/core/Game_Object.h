#pragma once
#include "Include.h"

class Game_Object{
public:
	sf::Sprite Sprite;
	virtual sf::Sprite getSprite() = 0;
private:
};
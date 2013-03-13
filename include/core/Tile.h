#include "Include.h"
#include "Game_Object.h"
#include "TileProp.h"
class Tile : Game_Object{
public:
	void init();
	void setSprite(sf::Sprite &SP);
private:
	TileProp TP;
};
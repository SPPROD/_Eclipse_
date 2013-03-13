#include "Tile.h"


void Tile::init(){
	TP.Collision_Type = "AABB";
	TP.CollisionMask.x = 64;
	TP.CollisionMask.y = 64;
}
void Tile::setSprite(sf::Sprite &SP){
	Sprite = SP;
}
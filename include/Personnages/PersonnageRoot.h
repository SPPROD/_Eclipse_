#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class PersonnageRoot 
{
public : 

virtual void Move(int x, int y);
virtual void die();
virtual void attack(int degats); 
virtual void speak(std::string text);
virtual void seDeplacer( int rand);
virtual void spawn(/*to set the coordinates of appearance */);
virtual bool getIsAlive();        
virtual std::string getName();
virtual sf::Sprite getSprite();       
virtual sf::Vector2f getPosition();                   

protected :

std::vector <sf::Sprite> m_sprite;
std::string m_name;
bool m_isAlive;
sf::Vector2f  m_position;
};
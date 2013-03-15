#pragma once
#include "Attackable.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class Arme;
class Consommable;
class Hero : public Attackable
{
public :

	void attaquerSort(int damage, int timeElapse);
	void gagnerPo(int po);
	void useConsommable(Consommable truc);
	void changeArme(Arme *arme);
	void heal(int life);
	virtual void seDeplacer( /* events SFML*/);
	void perdreMana(int mana);
	int getMana();
	int getMonney();
	bool searchBox(); //This function returns a bool to see if the inventory is empty or not.
	void setSprite(sf::Sprite image);// This funtcion set the sprite of any object in the inventory
	virtual void attack(int degats);

private :

	sf::Sprite m_Inventaire [5][5];
	Arme *m_arme;
	int m_mana;
	int m_monney;



};
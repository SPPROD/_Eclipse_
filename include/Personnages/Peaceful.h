#pragma once
#include "Attackable.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class Peaceful : public Attackable
{
public :

	void attackIa(int damage);
	void loosLoot(/*Object loose*/);// This function is not fished .
	virtual void die();//fais voir le dossier du projet stp

protected :





};
#pragma once
#include "PersonnageRoot.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class Attackable : public PersonnageRoot
{
public :

	virtual void receiveDamage(int damage);
	virtual int getLife();

protected :


	int m_life;



};
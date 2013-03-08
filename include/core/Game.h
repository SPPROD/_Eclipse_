#pragma once
#include "Include.h"
#include "Graphics.h"

class Graphics; // Evite l'erreur de double inclusion


class Game{
public:
	void init(std::string title);//Initialise le jeu et met le titre Eclipse
	void update();
	void render();
	bool closeRequested(sf::RenderWindow &window);
	bool closeRequested();

	sf::RenderWindow &getWindow();
	~Game();
private:
	sf::RenderWindow  Window;
	Graphics *_graphics;
};

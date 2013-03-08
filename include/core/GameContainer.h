#pragma once
#include "Include.h"
#include "Game.h"
#include "Graphics.h"

class GameContainer{
public:
	GameContainer();
	~GameContainer();
	void start();
	void stop();
	
	bool stopRequest();
private:
	void gameLoop();
	Game *_game;
};
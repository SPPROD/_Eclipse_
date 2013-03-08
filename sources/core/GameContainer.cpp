#include "GameContainer.h"
#include "Graphics.h"

GameContainer::GameContainer(){
	_game = new Game;
}
GameContainer::~GameContainer(){
	delete _game;
}

void GameContainer::start(){
	_game->init("Eclipse"); 
	gameLoop();
}
void GameContainer::gameLoop(){
	while(!_game->closeRequested(_game->getWindow())){
		std::cout<<"NewLoop"<<std::endl;
		if(stopRequest()){
			stop();
		}
		//Looping
		_game->update();
		_game->render();
	}
}
void GameContainer::stop(){
	system("pause");
}
bool GameContainer::stopRequest(){
	return false;
}

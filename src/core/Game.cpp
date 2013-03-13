#include "Game.h"

void Game::init(std::string title){
	//Configuration struct with a lot of window properties (window size, full screen...)
	//Structure de configuration avec beaucoup de propriétés de la fenêtre (taille de la fenêtre, plein écran...)
	//sf::RenderWindow window(sf::VideoMode(640, 480), title);
	Window.create(sf::VideoMode(640, 480), title);
	_graphics = new Graphics();
	_graphics->init(this);
}

Game::~Game(){
	delete _graphics;//Graphics needs Window. In case of Multithreading, delete _graphics before Window
	Window.close();
}

bool Game::closeRequested(sf::RenderWindow &window){
sf::Event event;
int i;

i = window.getSize().x;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                return true;
			}
        }
		return false;
}

bool Game::closeRequested(){
sf::Event event;
int i;
i = Window.getSize().x;
        while (Window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                return true;
			}
        }
		return false;
}
void Game::update(){
	//Test
	/*sf::Sprite Sprite;
	Sprite = _graphics->loadSprite("Base9.png");
	Window.draw(Sprite);
	*/
}
void Game::render(){
	Window.display();
}
sf::RenderWindow &Game::getWindow(){
	return Window;
}
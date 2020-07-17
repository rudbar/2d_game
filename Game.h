#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

//Game class contains all the main functions to maintain the flow of the game

class Game
{
private:
	//variables section
	//window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	//private functions section
	void initVariables();
	void initWindow();
public:
	//Constructors and destructors part
	Game();
	virtual ~Game();

	//Accessors
	const bool running() const;

	//defining functions
	void pollEvents();
	void update();
	void render();
};


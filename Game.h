#pragma once

#include <iostream>
#include <vector>

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

	//Mouse cursor position
	sf::Vector2i mousePosWindow;

	//class objects
	std::vector<sf::RectangleShape> enemies;
	sf::RectangleShape enemy;

	//private functions section
	void initVariables();
	void initWindow();
	void initEnemies();

public:
	//Constructors and destructors part
	Game();
	virtual ~Game();

	//Accessors
	const bool running() const;

	//defining functions
	void spawnEnemy();

	void pollEvents();
	void updateMousePositions();
	void updateEnemies();
	void update();

	void renderEnemies();
	void render();
};


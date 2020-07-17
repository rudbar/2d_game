#include "Game.h"


//private functions
void Game::initVariables()
{
	this->window = nullptr;
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "Game", sf::Style::Titlebar | sf::Style::Close);
}

//Constructor and destructor
Game::Game()
{
	this->initVariables();
	this->initWindow();
}


Game::~Game()
{
	delete this->window;
}

//Accessors
const bool Game::running() const
{
	return this->window->isOpen();
}

//functions
void Game::pollEvents()
{
	//Events handling
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

void Game::update()
{
	this->pollEvents();
}

void Game::render()
{
	/*
	@returns void
	- clears previous set of frames
	- renders all the objects
	- draws the game objects
	- displays the new updated game objects
	*/
	//Clears the window
	this->window->clear(sf::Color(255, 0, 0, 255));

	//Draws the game
	this->window->display();
}

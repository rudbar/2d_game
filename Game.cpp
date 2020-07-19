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

	this->window->setFramerateLimit(60);
}

void Game::initEnemies()
{
	this->enemy.setPosition(10.f, 10.f);
	this->enemy.setSize(sf::Vector2f(100.f, 100.f));
	this->enemy.setScale(sf::Vector2f(0.5f, 0.5f));
	this->enemy.setFillColor(sf::Color::Cyan);
	this->enemy.setOutlineColor(sf::Color::Blue);
	this->enemy.setOutlineThickness(1.f);

}

//Constructor and destructor
Game::Game()
{
	this->initVariables();
	this->initWindow();
	this->initEnemies();
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
void Game::spawnEnemy()
{

}

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

void Game::updateMousePositions()
{
	/*
	@ returns void

	updates mouse cursor position inside the current window (vector2i)
	*/

	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
}

void Game::updateEnemies()
{
}

void Game::update()
{
	this->pollEvents();

	this->updateMousePositions();

	this->updateEnemies();
}

void Game::renderEnemies()
{
	
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
	this->window->clear();

	//Draws the game
	this->renderEnemies();

	this->window->display();
}

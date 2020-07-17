#include <iostream>
#include "Game.h"


int main()
{
	//initialize Game class
	Game game;

	//Creating game loop
	while (game.running())
	{
		//Updating the game
		game.update();

		//Rendering part
		game.render();
	}



	//Closing the program
	return 0;
}
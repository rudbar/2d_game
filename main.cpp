#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main()
{
	//Creating window
	sf::RenderWindow window(sf::VideoMode(640, 480), "Game", sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;

	//Creating game loop
	while (window.isOpen())
	{
		//Events handling
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
					window.close();
				break;
			}
		}

		//Updating the game

		//Rendering part
		window.clear(sf::Color::Blue);

		//Drawing updated scene

		window.display();
	}



	//Closing the program
	return 0;
}
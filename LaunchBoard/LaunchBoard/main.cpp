// main.cpp : Defines the entry point for the console application.
//

#include <SFML/Graphics.hpp>
#include "KeyboardBackground.h"
#include "KeyLayout.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(546, 300), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	KeyboardBackground kbbg;
	KeyLayout kl;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed)
				kl.KeyPressed(event);
		}

		window.clear();
		//window.draw(shape);
		window.draw(kbbg);
		window.draw(kl);
		window.display();
	}

	return 0;
}
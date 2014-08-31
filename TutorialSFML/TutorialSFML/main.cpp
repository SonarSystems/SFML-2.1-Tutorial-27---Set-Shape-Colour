#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::CircleShape circle(150);
	circle.setRadius(200);

	circle.setPointCount(300);

	//circle.setFillColor(sf::Color::Cyan);
	circle.setFillColor(sf::Color(255, 155, 155));

	circle.setOutlineColor(sf::Color::Blue);

	circle.setOutlineThickness(-10);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.draw(circle);

		window.display();
	}
}
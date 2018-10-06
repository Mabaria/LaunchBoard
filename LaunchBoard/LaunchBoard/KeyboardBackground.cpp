#include "KeyboardBackground.h"

KeyboardBackground::KeyboardBackground()
{
	if (!this->texture.loadFromFile("../Assets/KBBG.png")) {
		std::cout << "Error: could not load KeyboardBackground texture!" << std::endl;
	}

	this->sprite.setTexture(this->texture);
}

KeyboardBackground::~KeyboardBackground()
{
}

void KeyboardBackground::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
		target.draw(this->sprite, states);
}

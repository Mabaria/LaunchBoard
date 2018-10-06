#include "Key.h"

Key::Key(const sf::Vector2f& position)
{
	this->isActive = false;
	if (!this->texture.loadFromFile("../Assets/KeyOverlay.png")) {
		std::cout << "Error: could not load Key texture!" << std::endl;
	}

	this->sprite.setTexture(this->texture);
	this->sprite.setColor(sf::Color(255,0,0));
	this->sprite.setPosition(position);
}

Key::~Key()
{
}

void Key::setActive(bool isActive)
{
	this->isActive = isActive;
	if (isActive) {
		sound.setBuffer(this->soundBuffer);
		sound.play();
		
	}
}

bool Key::getActive()
{
	return this->isActive;
}

bool Key::isSoundPlaying()
{
	return this->sound.getStatus() == 2;
}

void Key::setAudio(std::string & filePath)
{
	this->soundBuffer.loadFromFile(filePath);
}

void Key::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(this->sprite, states);
}

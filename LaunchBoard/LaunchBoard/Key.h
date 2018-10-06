#pragma once
#include "Graphics.h"
#include <iostream>
class Key : public Graphics {
private:
	// TODO : Key holding and playing its own audio
public:
	Key(const sf::Vector2f& position = sf::Vector2f(0.0f, 0.0f));
	~Key();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

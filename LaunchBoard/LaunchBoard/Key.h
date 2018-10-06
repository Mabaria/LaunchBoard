#pragma once
#include "Graphics.h"
#include <iostream>
class Key : public Graphics {
private:
	// TODO : Key holding and playing its own audio
	bool isActive;
public:
	Key(const sf::Vector2f& position = sf::Vector2f(0.0f, 0.0f));
	~Key();
	void setActive(bool isActive);
	bool getActive();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

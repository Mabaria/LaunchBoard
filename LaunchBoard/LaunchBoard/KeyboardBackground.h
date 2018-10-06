#pragma once
#include "Graphics.h"
#include <iostream>
class KeyboardBackground : public Graphics {
private:


public:
	KeyboardBackground();
	~KeyboardBackground();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};
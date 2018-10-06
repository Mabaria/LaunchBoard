#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
class Graphics : public sf::Drawable {
protected:
	sf::Sprite sprite;
	sf::Texture texture;

public:
	Graphics();
	virtual ~Graphics();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
};
#include "KeyLayout.h"

void KeyLayout::init()
{
	// Top row §123...890+´
	Key* KeySec = new Key(sf::Vector2f(4, 4));
	Key* Key1 = new Key(sf::Vector2f(4 + 36 * 1, 4));
	Key* Key2 = new Key(sf::Vector2f(4 + 36 * 2, 4));
	Key* Key3 = new Key(sf::Vector2f(4 + 36 * 3, 4));
	Key* Key4 = new Key(sf::Vector2f(4 + 36 * 4, 4));
	this->topRowKeys.push_back(KeySec);
	this->topRowKeys.push_back(Key1);
	this->topRowKeys.push_back(Key2);
	this->topRowKeys.push_back(Key3);
	this->topRowKeys.push_back(Key4);
}

KeyLayout::KeyLayout()
{
	this->init();
}

KeyLayout::~KeyLayout()
{
}

void KeyLayout::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (unsigned int i = 0; i < this->topRowKeys.size(); i++) {
		this->topRowKeys[i]->draw(target, states);
	}
}

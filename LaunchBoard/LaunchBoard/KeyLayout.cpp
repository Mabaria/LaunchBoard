#include "KeyLayout.h"
#include <iostream>

void KeyLayout::init()
{
	// Top row §123...890+´
	Key* KeySec = new Key(sf::Vector2f(4, 4));
	Key* Key1 = new Key(sf::Vector2f(4 + 36 * 1, 4));
	Key1->setAudio(std::string("../Assets/Sound/Sound1.wav"));
	Key* Key2 = new Key(sf::Vector2f(4 + 36 * 2, 4));
	Key2->setAudio(std::string("../Assets/Sound/Sound2.wav"));
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
	for (unsigned int i = 0; i < this->activeKeys.size(); i++) {
		this->activeKeys[i]->draw(target, states);
	}
}

void KeyLayout::KeyPressed(sf::Event & keyboardEvent)
{
	std::cout << keyboardEvent.key.code << std::endl;
	switch (keyboardEvent.key.code) {

	case sf::Keyboard::BackSlash : // Backslash = § on nordic layout
		if (!this->topRowKeys[0]->getActive()) {
			this->activeKeys.push_back(this->topRowKeys[0]);
		}
		this->topRowKeys[0]->setActive(true);
		break;
	case sf::Keyboard::Num1 :
		if (!this->topRowKeys[1]->getActive()) {
			this->activeKeys.push_back(this->topRowKeys[1]);
		}
		this->topRowKeys[1]->setActive(true);
		break;

	case sf::Keyboard::Num2:
		if (!this->topRowKeys[2]->getActive()) {
			this->activeKeys.push_back(this->topRowKeys[2]);
		}
		this->topRowKeys[2]->setActive(true);
		break;

	case sf::Keyboard::Num3:
		if (!this->topRowKeys[3]->getActive()) {
			this->activeKeys.push_back(this->topRowKeys[3]);
		}
		this->topRowKeys[3]->setActive(true);
		break;

	case sf::Keyboard::Num4:
		if (!this->topRowKeys[4]->getActive()) {
			this->activeKeys.push_back(this->topRowKeys[4]);
		}
		this->topRowKeys[4]->setActive(true);
		break;

	}
}

void KeyLayout::Update()
{
	// Remove non-sound playing keys from activeKeys
	for (std::vector<Key*>::iterator i = activeKeys.begin(); i != activeKeys.end(); i++) {
		if (!(*i)->isSoundPlaying()) {
			(*i)->setActive(false);
			i = this->activeKeys.erase(i);
			if (i == activeKeys.end()) {
				break;
			}
		}
	}
}

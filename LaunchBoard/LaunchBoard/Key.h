#pragma once
#include "Graphics.h"
#include <SFML/Audio.hpp>
#include <iostream>
class Key : public Graphics {
private:
	// TODO : Key holding and playing its own audio
	sf::SoundBuffer soundBuffer;
	sf::Sound sound;
	bool isActive;
public:
	Key(const sf::Vector2f& position = sf::Vector2f(0.0f, 0.0f));
	~Key();
	void setActive(bool isActive);
	bool getActive();
	bool isSoundPlaying();
	void setAudio(std::string &filePath);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

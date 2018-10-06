#pragma once
#include "Graphics.h"
#include "Key.h"
#include <vector>
class KeyLayout : public Graphics {
private:
	std::vector<Key*> topRowKeys;
	void init();
public:
	KeyLayout();
	virtual ~KeyLayout();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
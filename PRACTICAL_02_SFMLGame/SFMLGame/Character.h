#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
class Character
{
public:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
public:
	Character();
	~Character();
	void initialize();
	void update();
	void draw(sf::RenderWindow* t_window);
};
#endif
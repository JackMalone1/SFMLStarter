#include "NPC.h"

NPC::NPC()
{
	initialize();
};
NPC::~NPC()
{
};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;
	if (!m_texture.loadFromFile("024_Png.png"))
	{
		cout << "error" << endl;
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setScale(sf::Vector2f(0.25, 0.25));
	m_sprite.setPosition(100, 200);
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* t_window)
{
	t_window->draw(m_sprite);
}
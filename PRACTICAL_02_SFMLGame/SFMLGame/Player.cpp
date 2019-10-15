#include "Player.h"

Player::Player()
{
	initialize();
};
Player::~Player()
{
};

void Player::initialize()
{
	cout << "Player initialize" << endl;
	if (!m_texture.loadFromFile("021_Png.png"))
	{
		cout << "error" << endl;
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setScale(sf::Vector2f(0.25, 0.25));
	m_sprite.setPosition(50, 50);
}
void Player::update()
{
	//cout << "Player updating" << endl;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_sprite.setPosition(m_sprite.getPosition().x - 1, m_sprite.getPosition().y);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_sprite.setPosition(m_sprite.getPosition().x + 1, m_sprite.getPosition().y);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		m_sprite.setPosition(m_sprite.getPosition().x, m_sprite.getPosition().y + 1);
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		m_sprite.setPosition(m_sprite.getPosition().x, m_sprite.getPosition().y - 1);
	}
}
void Player::draw(sf::RenderWindow* t_window)
{

	t_window->draw(m_sprite);
}
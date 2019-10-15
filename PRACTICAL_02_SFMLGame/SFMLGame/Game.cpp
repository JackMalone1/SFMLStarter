#include "Game.h"
#include <SFML/Graphics.hpp>

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;

Game::Game() : m_displayColliding{false}
{


}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();

	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");
}

void Game::run()
{
	initialize();

	while (window->isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		player->update();
		npc->update();

		if (player->m_sprite.getGlobalBounds().intersects(npc->m_sprite.getGlobalBounds()) && !m_displayColliding)
		{
			cout << "colliding" << endl;
			m_displayColliding = true;
			m_displayNotColliding = false;
		}
		else if(!(player->m_sprite.getGlobalBounds().intersects(npc->m_sprite.getGlobalBounds())) && !m_displayNotColliding)
		{
			cout << "not colliding" << endl;
			m_displayColliding = false;
			m_displayNotColliding = true;
		}
	}

}

void Game::draw()
{
	window->clear();
	player->draw(window);
	npc->draw(window);
	window->display();
}



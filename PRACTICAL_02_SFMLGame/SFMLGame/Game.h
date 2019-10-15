#include "Player.h"
#include "NPC.h"

class Game
{
	public:
		Game();
		void run();
	private:
		void initialize();
		void update();
		void draw();
		Player* player;
		NPC* npc;
		bool m_displayColliding;
		bool m_displayNotColliding;
};
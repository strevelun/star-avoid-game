#pragma once

#include "Player.h"
#include "Star.h"
#include <list>

class Game
{
	Player* m_player;
	std::list<Star*> m_starObjList;

public:
	Game() { m_player = new Player(); }
	~Game() 
	{ 
		if( m_player ) delete m_player; 

		std::list<Star*>::iterator iter = m_starObjList.begin();
		std::list<Star*>::iterator iterEnd = m_starObjList.end();

		for (; iter != iterEnd; iter++)
			delete *iter;
	}

	bool IsGameOver();
	void Input();
	void Update();
	void Render();
};


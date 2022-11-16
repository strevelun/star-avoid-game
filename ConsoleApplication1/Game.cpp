#include "Game.h"
#include <conio.h>
#include <windows.h>

bool Game::IsGameOver()
{
	if (m_player->IsAlive()) 
		return false; 

	printf("¢Æ");
	return true;
}

void Game::Input()
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == 'a')
		{
			m_player->Move(-1);
		}
		else if (key == 'd')
		{
			m_player->Move(1);

		}
	}
}

void Game::Update()
{
	m_starObjList.push_back(new Star());

	std::list<Star*>::iterator iter = m_starObjList.begin();
	std::list<Star*>::iterator iterEnd = m_starObjList.end();

	for (; iter != iterEnd; iter++)
	{
		(*iter)->Update();

		if(m_player->Dead(**iter))
			return;

		if (!(*iter)->IsAlive())
		{
			delete* iter;
			m_starObjList.erase(iter);
			iter = m_starObjList.begin();
		}
	}
}

void Game::Render()
{
	std::list<Star*>::iterator iter = m_starObjList.begin();
	std::list<Star*>::iterator iterEnd = m_starObjList.end();

	for (; iter != iterEnd; iter++)
	{
		(*iter)->Render();
	}

	m_player->Render();
}


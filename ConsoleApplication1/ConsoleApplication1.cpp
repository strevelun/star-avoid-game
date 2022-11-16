
#include <windows.h>
#include <stdio.h>
#include "Game.h"

int main()
{
	Game game;
	
	while (1)
	{
		system("cls");
		game.Input();
		game.Update();
		game.Render();

		if (game.IsGameOver())
			break;

		Sleep(50);
	}
}
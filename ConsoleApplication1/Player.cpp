#include "Player.h"
#include "Star.h"
#include <conio.h>
#include <stdio.h>

void Player::Render()
{
	GotoXY();
	if (m_isAlive)
		printf("P");
}

void Player::Move(int xpos)
{
	m_xpos += xpos;
}

bool Player::Dead(const Star& s)
{
	if (s.GetXPos() == m_xpos && s.GetYPos() == m_ypos)
	{
		m_isAlive = false;
		return true;
	}

	return false;
}

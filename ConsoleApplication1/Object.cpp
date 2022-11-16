#include "Object.h"
#include <Windows.h>

void Object::GotoXY()
{
	COORD pos = { m_xpos,m_ypos };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

Object::Object()
{
}

Object::~Object()
{
}

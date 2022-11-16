#pragma once

class Object
{
protected:
	int m_xpos = 0, m_ypos = 0;
	bool m_isAlive = true;

	virtual void Render() = 0;
	void GotoXY();

public :
	Object();
	~Object();
};
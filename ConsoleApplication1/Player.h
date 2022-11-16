#pragma once
#include "Object.h"

class Star;

class Player : public Object
{

public:
    Player() { m_xpos = 5; m_ypos = 30; }
    ~Player() {}

    void    Render();
    void    Move(int);
    bool    Dead(const Star& s);

    bool IsAlive() const { return m_isAlive; }
};
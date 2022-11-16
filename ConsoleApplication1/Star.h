#pragma once
#include "Object.h"

class Star : public Object
{
public:
    Star();
    ~Star();

    int GetXPos() const { return m_xpos; }
    int GetYPos() const { return m_ypos; }

    void Render();
    void Update();

    bool IsAlive() const { return m_isAlive; }
};


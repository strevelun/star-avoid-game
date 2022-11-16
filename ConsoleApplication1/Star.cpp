#include "Star.h"
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <functional>
#include <sys/timeb.h>

Star::Star()
{
	struct timeb milli_now;
	struct tm* now;

	ftime(&milli_now);

	std::mt19937 engine(milli_now.millitm);             
	std::uniform_int_distribution<int> distribution(0, 10);
	auto generator = bind(distribution, engine);


	m_xpos = generator();
}

Star::~Star()
{
}

void Star::Render()
{
	GotoXY();
	printf("s");
}

void Star::Update()
{
	if (m_ypos + 1 >= 31)
	{
		m_isAlive = false;
		return;
	}

	m_ypos++;
}

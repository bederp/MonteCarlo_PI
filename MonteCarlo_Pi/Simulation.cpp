#include "stdafx.h"
#include "Simulation.h"


Simulation::Simulation(long iterations)
{
	this->iterations = iterations;
	srand(time(NULL));
	radious = RAND_MAX / 2;
}


Simulation::~Simulation()
{
}


double Simulation::start()
{
	long inCircle = 0;
	for (long i = 0; i < iterations; i++)
	{
		inCircle += step();
	}
	return  4*((double)inCircle) / iterations;
}


bool Simulation::step()
{
	int x = rand();
	int y = rand();
	return distance(x, y) <= radious * radious;
}

double Simulation::distance(int x, int y)
{
	double distanceX = radious - x;
	distanceX *= distanceX;
	double distanceY = radious - y;
	distanceY *= distanceY;
	return distanceX + distanceY;
}


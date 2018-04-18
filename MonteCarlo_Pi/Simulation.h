#pragma once
class Simulation
{
public:
	Simulation(long);
	~Simulation();
private:
	long iterations;
	long radious;
public:
	double start();
private:
	bool step();
	double distance(int, int);
};


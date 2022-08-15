#include "RandomComputer.h"
#include <ctime>
#include <random>

int RandomComputer::R = 0;

RandomComputer::RandomComputer() { srand(time(0)); }

RandomComputer::~RandomComputer() {}

void RandomComputer::setmove()
{
	this->R = rand();
	this->move = (R % 3 == 0) ? 'R' : (R % 3 == 1) ? 'P' : 'S';
}

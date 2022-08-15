#include "Crescendo.h"

int Crescendo::C = 0;

Crescendo::Crescendo() {}

Crescendo::~Crescendo() {}

void Crescendo::setmove()
{
	this->move = (C % 3 == 0) ? 'P' : (C % 3 == 1) ? 'S' : 'R';
	this->C++;
}

void Crescendo::reset() { this->C = 0; }
#include "FistfullODollars.h"

int FistfullODollars::F = 0;

FistfullODollars::FistfullODollars() {}

FistfullODollars::~FistfullODollars() {}

void FistfullODollars::setmove()
{
	this->move = (F % 3 == 0) ? 'R' : 'P';
	this->F++;
}

void FistfullODollars::reset() { this->F = 0; }
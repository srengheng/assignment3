#include "PaperDoll.h"

int PaperDoll::P = 0;

PaperDoll::PaperDoll() {}

PaperDoll::~PaperDoll() {}

void PaperDoll::setmove()
{
	this->move = (P % 3 == 0) ? 'P' : 'S';
	this->P++;
}

void PaperDoll::reset() { this->P = 0; }
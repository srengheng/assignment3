#include "Referee.h"

Referee::Referee() {}

Referee::~Referee() {}

char Referee::refGame(Player* p1, Player* p2)
{
	p1->setmove();
	p2->setmove();
	if (((p1->getmove() == 'P') && (p2->getmove() == 'R')) || ((p1->getmove() == 'S') && (p2->getmove() == 'P')) || ((p1->getmove() == 'R') && (p2->getmove() == 'S')))
		this->outcome = 'W';
	else if (p1->getmove() == p2->getmove())
		this->outcome = 'T';
	else
		this->outcome = 'L';
	return this->outcome;
}
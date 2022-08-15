#include "Tournament.h"

Tournament::Tournament() {}

Tournament::~Tournament() {}

Player* Tournament::play(Player* p1, Player* p2)
{
	for (int i = 0; i < 5; i++)
	{
		Referee check;
		if (check.refGame(p1, p2) == 'L')
			++this->lose;
	}
	p1->reset();
	p2->reset();
	if (lose >= 3)
	{
		this->lose = 0;
		return p2;
	}
	else
	{
		this->lose = 0;
		return p1;
	}
}

Player* Tournament::run(std::array<Player*, 8> p)
{
	return play(play(play(p.at(0), p.at(1)), play(p.at(2), p.at(3))), play(play(p.at(4), p.at(5)), play(p.at(6), p.at(7))));
}
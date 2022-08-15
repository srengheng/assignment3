#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"

class Referee
{
	char outcome;
public:
	Referee();
	~Referee();
	char refGame(Player*, Player*);
};

#endif
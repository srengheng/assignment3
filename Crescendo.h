#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"

class Crescendo :public Player
{
	static int C;
public:
	Crescendo();
	~Crescendo();
	void setmove();
	void reset();
};

#endif
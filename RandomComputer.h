#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Player.h"

class RandomComputer :public Player
{
	static int R;
public:
	RandomComputer();
	~RandomComputer();
	void setmove();
};

#endif

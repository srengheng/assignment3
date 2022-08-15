#ifndef FISTFULLODALLARS_H
#define FISTFULLODALLARS_H
#include "Player.h"

class FistfullODollars :public Player
{
	static int F;
public:
	FistfullODollars();
	~FistfullODollars();
	void setmove();
	void reset();
};

#endif
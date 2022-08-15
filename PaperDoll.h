#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Player.h"

class PaperDoll :public Player
{
	static int P;
public:
	PaperDoll();
	~PaperDoll();
	void setmove();
	void reset();
};

#endif
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human :public Player
{
public:
	Human();
	~Human();
	void setmove();
};

#endif
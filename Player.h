#ifndef PLAYER_H
#define PLAYER_H

class Player
{
protected:
	char move;
public:
	Player();
	~Player();
	virtual void setmove();
	virtual void reset();
	char getmove();
};

#endif
#ifndef _ACTION_H
#define _ACTION_H

#include "Screen.hpp"
#include "Player.hpp"
#include "Missile.hpp"

typedef enum
{
	NONE,
	MOVE_LEFT,
	MOVE_RIGHT,
	MOVE_UP,
	MOVE_DOWN,
	SHOOT
} moves_t;

class KeyEvent
{

public:
    KeyEvent();
    ~KeyEvent();
    void setMove();
    void applyMove(Player *p, Missile *m);

private:
    int _move;
};

#endif

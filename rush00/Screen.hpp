#ifndef _SCREEN_H
#define _SCREEN_H

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>

#include "Player.hpp"
#include "Enemy.hpp"
#include "AllHeaders.hpp"
#include "Missile.hpp"
#include "KeyEvent.hpp"

# define MAX_W		150
# define MAX_H		50
# define FRAMERATE  40

class Screen
{

public:
    Screen();
    ~Screen();
    Screen(Screen const & obj);

    void screenEnd(void);
    void printScore(int score, int life);
    void screenUpdate(Player *p, Enemy *en, Missile *m);
    void screenInit(void);
    void gameOver( Player *p );
    void main_loop(Player *p, Enemy *en, Missile *m);
};

#endif

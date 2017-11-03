#include "Player.hpp"
#include "Screen.hpp"
#include "KeyEvent.hpp"

int main()
{
	Screen scr;
    Player *ply = new Player();
	Enemy	*en = new Enemy[ENEMY_NUM];
	Missile * m = new Missile();

    scr.screenInit();
    scr.screenUpdate(ply, en, m);
	scr.main_loop(ply, en, m);
}

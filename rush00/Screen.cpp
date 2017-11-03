#include "Screen.hpp"

Screen::Screen()
{
    return;
}

Screen::~Screen()
{
    return;
}

Screen::Screen(Screen const & obj)
{
    *this = obj;
}

/*Screen & Screen::operator =(Screen const & obj)
{
	*this = obj;
    return *this;
}*/

void Screen::screenEnd(void)
{
	endwin();
}

void Screen::printScore(int score, int life)
{
	mvprintw(0, 0, "****	Score: %5d	****", score);
	mvprintw(1, 0, "****	Life : %5d	****", life);
}

void Screen::screenUpdate(Player *p, Enemy *en, Missile *m)
{
	/* clear window */
	clear();

	/* Position cursor on player. */
	if (p->getYPos() <= 3)
		p->setYPos(3);
	mvprintw( p->getYPos(), p->getXPos(), "<A>");

	for (int k = 0; k < ENEMY_NUM; k++)
			en[k].collision(p, m);
	
	if (p->getLife() < 0)
		gameOver(p);
	
	if (m->getIsAlive())
		mvprintw( m->getYMissile() - 1, m->getXMissile(), "|");
	int i = 0;
	m->setYMissile(m->getYMissile() - 3);

	while (i < ENEMY_NUM)
	{
		if (en[i].getYPos() == MAX_H)
		{
			en[i].setYPos(0);
			en[i].setIsAlive(true);
		}

		if (en[i].getIsAlive() == true)
		{						
			mvprintw( en[i].move(), en[i].getXPos(), "#");			
		}
		else
			en[i].move();

		i++;
	}

	printScore( p->getScore(), p->getLife() );
    mvprintw(2, 0, "***	Pos : %5d %3d	***", p->getXPos(), p->getYPos());
	refresh();
}

void Screen::screenInit( void )
{
	int	max_y, max_x;

	initscr();
	curs_set(0);
	start_color();
    use_default_colors();
	getmaxyx(stdscr, max_y, max_x);
	
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
}

void Screen::main_loop(Player *p, Enemy *en, Missile *m)
{
    KeyEvent event;
    struct timeval	st;
    struct timeval	end;
    
    while (true )
    {
        gettimeofday(&st, NULL);
        event.setMove();
        event.applyMove(p, m);
        gettimeofday(&end, NULL);
        if (st.tv_usec < end.tv_usec)
            st.tv_usec = end.tv_usec;;
        usleep( ( FRAMERATE * 7000 ) - ( end.tv_usec - st.tv_usec ) );
        screenUpdate(p, en, m);
    }

}

void Screen::gameOver(Player *p)
{
	int		c = 0;

	erase();
	clear();
	mvprintw( MAX_H / 2, MAX_W / 4, "**	Game Over :( Score: %5d	**", p->getScore() );
	mvprintw( MAX_H / 2 + 1, MAX_W / 4, "**	Replay: r	Quit: q		**", p->getScore() );
	refresh();
	while ( c != 'r' && c != 'q' )
	{
		c = getch();
		if ( c == 'r' || c == 'q' )
		{
			delete p;
			if (c == 'r')
				{
					Player *ply = new Player();
					Enemy	*en = new Enemy[ENEMY_NUM];
					Missile * m = new Missile();

					screenInit();
					screenUpdate(ply, en, m);
					main_loop(ply, en, m);
				}
			else
		    	exit(0);
				endwin();
		}	
	}
}

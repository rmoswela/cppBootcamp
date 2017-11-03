#include "KeyEvent.hpp"

KeyEvent::KeyEvent()
{
    return;
}

KeyEvent::~KeyEvent()
{
    return;
}

void KeyEvent::setMove()
{
    int	c = 0;
	_move = 0;

	while ((c = getch() ) != ERR)
	{
        switch ( c )
        {
            case KEY_RESIZE:
                exit(0);
            case KEY_LEFT:
                _move = MOVE_LEFT;
                break;
            case KEY_RIGHT:
                _move = MOVE_RIGHT;
                break;
            case KEY_UP:
                _move = MOVE_UP;
                break;
            case KEY_DOWN:
                _move = MOVE_DOWN;
                break;
            case ' ':
                _move = SHOOT;
                break;
            case 'q':
                endwin();
                exit(0);               
            default:
                break;
        }
	}
}

void KeyEvent::applyMove(Player *p, Missile * m)
{
    switch (_move)
	{
		case MOVE_LEFT:
			if ( p->getXPos() > 0 )
      			p->setXPos( p->getXPos() - 1 );
      		break;
	    case MOVE_RIGHT:
	    	if ( p->getXPos() < MAX_W )
    	  		p->setXPos( p->getXPos() + 1 );
      		break;
      	case MOVE_UP:
			if ( p->getYPos() > 0 )
      			p->setYPos( p->getYPos() - 1 );
      		break;
	    case MOVE_DOWN:
	    	if ( p->getYPos() < MAX_H )
    	  		p->setYPos( p->getYPos() + 1 );
      		break;
        case SHOOT:
			m->playerShoot(p->getXPos() + 1, p->getYPos());
			m->setYMissile(m->getYMissile() - 2);
			m->setIsAlive(true);
			/*usleep(10000);
			m->setYMissile(m->getYMissile() - 1); 
			m->setYMissile(m->getYMissile() - 4); 
			usleep(10000);
			m->setYMissile(m->getYMissile() - 1); 
			usleep(10000);
			m->setYMissile(m->getYMissile() - 3); 
			m->setYMissile(m->getYMissile() - 1); 
			usleep(10000);
			m->setYMissile(m->getYMissile() - 1); 
			usleep(1000);
			m->setYMissile(m->getYMissile() - 1); 
			m->setYMissile(m->getYMissile() - 5); 
			m->setYMissile(m->getYMissile() - 1); 
			m->setYMissile(m->getYMissile() - 3); 
			m->setYMissile(m->getYMissile() - 1); */
            break;
	    default:
	      	break;
	}
}

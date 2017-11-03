#ifndef _PLAYER_H
#define _PLAYER_H

#include "GameEntity.hpp"

class Player : public GameEntity
{
public:
    Player(void);
    Player(Player const & obj);
    Player & operator=(Player const & src);
    ~Player(void);

    int getScore() const;
    int getLife() const;     
    void setScore(int score);
    void setLife(int life);   
    void shoot();
		
	private:
		int _score;
        int _life;
};

#endif
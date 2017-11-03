#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
public:

    Enemy(void);

    Enemy(int hp, std::string const &type);

    virtual ~Enemy() = 0;

    Enemy(Enemy const &src);

    Enemy &operator=(Enemy const & target);

    virtual void takeDamage(int amount);

    int getHP(void) const;

    std::string const &getType(void) const;


protected:
    int _hp;
    std::string _type;
};

#endif

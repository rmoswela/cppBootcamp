#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:

    Character(void);
    Character(std::string const & name);
    ~Character();
    Character(Character const & src);
    Character   &operator=(Character const & target);

    void                recoverAP();
    void                arsenal(AWeapon * weapon);
    void                attack(Enemy * target);
    std::string const   & getName() const;
    int                 getAP() const;
    AWeapon const       * getWeapon() const;

private:
    std::string   _name;
    int           _ap;
    AWeapon   *   _weapon;
};

std::ostream    &operator<<(std::ostream & os, Character const & rhs);

#endif

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{

public:

    AWeapon(void);
    AWeapon(std::string const &name, int apcost, int damage);
    ~AWeapon(void);
    AWeapon(AWeapon const & src);
    AWeapon &operator=(AWeapon const & target);

    std::string const &    getName() const;

    int             getAPCost(void) const;
    int             getDamage(void) const;
    virtual void    attack(void) const = 0;

private:
    std::string _name;
    int         _apcost;
    int         _damage;
};

std::ostream &operator<<(std::ostream & o, AWeapon const &copy);

#endif

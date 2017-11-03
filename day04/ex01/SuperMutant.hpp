#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:

    SuperMutant(void);
    ~SuperMutant(void);
    SuperMutant(SuperMutant const & target);
    SuperMutant     &operator=(SuperMutant const & target);

    virtual void    takeDamage(int amount);
};

#endif

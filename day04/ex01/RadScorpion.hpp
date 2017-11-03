#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion :public Enemy
{
public:
    RadScorpion(void);
    ~RadScorpion(void);
    RadScorpion(RadScorpion const & target);
    RadScorpion &operator=(RadScorpion const & target);
};

#endif

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
    PowerFist(void);

    ~PowerFist(void);

    PowerFist(PowerFist const & target);

    PowerFist &operator=(PowerFist const & target);

    void attack() const;

private:
    std::string _name;
};

#endif

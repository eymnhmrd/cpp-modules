#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(/* args */);
    HumanB(std::string name);
    ~HumanB();
    void   setWeapon(Weapon &w);
    void    attack();
};


#endif
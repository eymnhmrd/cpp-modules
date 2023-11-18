#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *w;
    bool        has_weapon;
public:
    HumanB(/* args */);
    ~HumanB();
    HumanB(std::string name);
    void    setWeapon(Weapon& w);
    void    attack();
};

#endif
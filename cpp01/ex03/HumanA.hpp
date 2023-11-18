#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon&     weapon;
public:
    HumanA(std::string name, Weapon &w);
    ~HumanA();
    void    setWeapon(Weapon &w);
    void    attack();
};

#endif
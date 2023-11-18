#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->has_weapon = false;
}

void    HumanB::attack()
{
    if(this->has_weapon)
        std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon " << std::endl;
}

void    HumanB::setWeapon(Weapon& w)
{    
    this->w = &w;
    this->has_weapon = true;
}

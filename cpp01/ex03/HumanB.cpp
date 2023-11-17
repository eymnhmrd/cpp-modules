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
}   

void   HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}
#include "HumanA.hpp"

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &w) : weapon(w)
{
    this->name = name;
}

void   HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
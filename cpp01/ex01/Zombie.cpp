#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie "<< this->name << " Created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie "<< this->name << " Dead" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
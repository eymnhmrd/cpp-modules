#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap : Default Constructor called" << std::endl;
    this->name = "Scavvy";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap : Param Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap : Copy Constructor called" << std::endl;
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap attacks " << target << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "ScavTrap " << this->name << " cannot attack" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

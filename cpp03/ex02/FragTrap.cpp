#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap : Default Constructor called" << std::endl;
    this->name = "Fraggy";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap : Param Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30; 
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "FragTrap : Copy Constructor called" << std::endl;
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap : Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "HIGH FIVE GUYSSSS !!!!!" << std::endl;
}
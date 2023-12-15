#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap : Default Constructor called" << std::endl;
    this->name = "Clappy";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap : Param Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "ClapTrap : Copy Constructor called" << std::endl;
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : Destructor Called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0) 
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " <<  this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->name << " cannot attack" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > amount)
    {
        this->hitPoints -= amount;
        std::cout << "ClapTrap took " << amount << " damage" << std::endl;
    }
    else if (this->hitPoints < amount && this->hitPoints > 0)
    {
        this->hitPoints = 0;
        std::cout << "ClapTrap is dead" << std::endl;
    }
    else
        std::cout << "ClapTrap is already dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        std::cout << "ClapTrap repairs itself" << std::endl;
        this->energyPoints--;
    }
    else 
       std::cout << "ClapTrap " << this->name << " cannot repair itself" << std::endl; 
}

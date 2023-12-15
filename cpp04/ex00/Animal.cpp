#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal : Default Constuctor called" << std::endl;
    this->type = "no specific type";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal : Param Constuctor called" << std::endl;
    this->type = type;
}

Animal::~Animal()
{
    std::cout << "Animal : Destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal : Copy Constuctor called" << std::endl;
    this->type = obj.type;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal : each animal has a sound" << std::endl;
}
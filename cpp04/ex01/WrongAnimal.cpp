#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal : Default Constructor called" << std::endl;
    this->type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal : Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout << "Wrong Animal : Copy Constructor called" << std::endl;
    this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal : making some sound" << std::endl;
}
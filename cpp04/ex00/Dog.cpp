#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog : Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog : Copy Constructor called" << std::endl;
    this->type = obj.type;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : Dog barks" << std::endl;
}
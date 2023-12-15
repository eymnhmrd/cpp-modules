#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat : Copy Constructor called" << std::endl;
    this->type = obj.type;
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : Cat meows" << std::endl;
}
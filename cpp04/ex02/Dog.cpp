#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog : Default Constructor called" << std::endl;
    this->type = "Dog";
    this->b = new (std::nothrow) Brain();
    if (!this->b)
        std::cout << "Memory allocation failed!" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog : Copy Constructor called" << std::endl;
    this->type = obj.type;
    this->b = new (std::nothrow) Brain(*(obj.b));
    if (!this->b)
        std::cout << "Memory allocation failed!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor called" << std::endl;
    delete b;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
        if (this->b)
            delete this->b;
        this->b = new (std::nothrow) Brain(*(obj.b));
        if (!this->b)
            std::cout << "Memory allocation failed!" << std::endl;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : Dog barks" << std::endl;
}
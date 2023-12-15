#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default Constructor called" << std::endl;
    this->type = "Cat";
    this->b = new (std::nothrow) Brain();
    if (!this->b)
        std::cout << "Memory allocation failed!" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat : Copy Constructor called" << std::endl;
    this->type = obj.type;
    this->b = new (std::nothrow) Brain(*(obj.b));
    if (!this->b)
        std::cout << "Memory allocation failed!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor called" << std::endl;
    delete b;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
        if (this->b)
            delete this->b;
        this->b = new (std::nothrow) Brain(*(obj.b));
        if (!this->b)
            std::cout << "Memory allocation failed!" << std::endl;
        // *this->b = *obj.b;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : Cat meows" << std::endl;
}
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrong Cat : Default Constructor called" << std::endl;
    this->type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat : Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "Wrong Cat : Copy Constructor called" << std::endl;
    this->type = obj.type;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Cat meows" << std::endl;
}
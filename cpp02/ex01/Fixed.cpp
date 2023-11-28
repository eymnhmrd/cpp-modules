#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixed = obj.getRawBits();
    return *this;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = n << this->fraction;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed = (int)(roundf(f * (1 << this->fraction)));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "SetRawBits member function called" << std::endl;
    this->fixed = raw;
}

int Fixed::toInt(void) const
{
    return (this->fixed >> this->fraction);
}

float Fixed::toFloat(void) const
{
    return ((float)(this->fixed) / (1 << this->fraction));
}   

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

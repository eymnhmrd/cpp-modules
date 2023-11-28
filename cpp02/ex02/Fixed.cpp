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

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixed = obj.getRawBits();
    return *this;
}

int Fixed::toInt(void) const
{
    return (this->fixed >> this->fraction);
}

float Fixed::toFloat(void) const
{
    return ((float)(this->fixed) / (1 << this->fraction));
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& obj)
{
    return (this->fixed > obj.getRawBits());
}

bool Fixed::operator<(const Fixed& obj)
{
    return (this->fixed < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed& obj)
{
    return (this->fixed >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed& obj)
{
    return (this->fixed <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed& obj)
{
    return (this->fixed == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed& obj)
{
    return (this->fixed != obj.getRawBits());
}

Fixed Fixed::operator+(const Fixed& obj)
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed& obj)
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator*(const Fixed& obj)
{    
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed& obj)
{
    if (obj.toFloat() == 0)
    {
        std::cout << "Cannot divide by zero" << std::endl;
        return (Fixed(0));
    }
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++()
{
    this->fixed++;
    return (*this);
}

Fixed Fixed::operator++(int a)
{
    (void)a;
    Fixed tmp = *this;

    this->fixed++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->fixed--;
    return (*this);
}

Fixed Fixed::operator--(int a)
{
    (void)a;
    Fixed tmp = *this;

    this->fixed--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed;
    static const int fraction = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& obj);
    Fixed(const int n);
    Fixed(const float f);
    Fixed& operator=(const Fixed& obj);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
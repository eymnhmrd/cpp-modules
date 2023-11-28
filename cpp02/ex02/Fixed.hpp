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
    bool operator>(const Fixed& obj);
    bool operator<(const Fixed& obj);
    bool operator>=(const Fixed& obj);
    bool operator<=(const Fixed& obj);
    bool operator==(const Fixed& obj);
    bool operator!=(const Fixed& obj);
    Fixed operator+(const Fixed& obj);
    Fixed operator-(const Fixed& obj);
    Fixed operator*(const Fixed& obj);
    Fixed operator/(const Fixed& obj);
    Fixed&  operator++();
    Fixed   operator++(int a);
    Fixed&  operator--();
    Fixed   operator--(int a);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
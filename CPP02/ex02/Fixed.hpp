#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    static const int _staticInteger = 8;
    int _integerValue;

public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(Fixed const &other);
    Fixed &operator=(Fixed const &other);

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;


    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed &operator++();    
    Fixed operator++(int);  
    Fixed &operator--();    
    Fixed operator--(int); 

    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif

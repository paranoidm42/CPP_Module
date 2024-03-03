#ifndef FIXED
#define FIXED

#include <iostream>
#include <cmath> 

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

    ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif

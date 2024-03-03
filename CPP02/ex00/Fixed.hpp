#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed
{
private:
	static const int _staticInteger = 8;
	int _integerValue;
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed& operator=(Fixed const &other);
	int getRawBits() const;
	void setRawBits(int const raw);
	~Fixed();
};


#endif

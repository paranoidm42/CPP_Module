#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}
Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_integerValue = num * static_cast<int>(pow(2,this->_staticInteger));
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_integerValue = roundf(num * pow(2,this->_staticInteger));
}

Fixed& Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return *this;
}

void Fixed::setRawBits(int raw)
{
	this->_integerValue = raw;
}
int Fixed::getRawBits() const
{
	return this->_integerValue;
}

int Fixed::toInt() const
{
	return this->_integerValue / static_cast<int>(pow(2,this->_staticInteger));
}

float Fixed::toFloat() const
{
	return this->_integerValue / pow(2,this->_staticInteger);
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//-----------------------------------------------
//--------------- OPERATOR DEC-------------------
//-----------------------------------------------

bool Fixed::operator>(const Fixed &other) const 
{
    return this->_integerValue > other._integerValue;
}

bool Fixed::operator<(const Fixed &other) const 
{
    return this->_integerValue < other._integerValue;
}

bool Fixed::operator>=(const Fixed &other) const 
{
    return this->_integerValue >= other._integerValue;
}

bool Fixed::operator<=(const Fixed &other) const 
{
    return this->_integerValue <= other._integerValue;
}

bool Fixed::operator==(const Fixed &other) const 
{
    return this->_integerValue == other._integerValue;
}

bool Fixed::operator!=(const Fixed &other) const 
{
    return this->_integerValue != other._integerValue;
}

Fixed Fixed::operator+(const Fixed &other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const 
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++() 
{
    this->_integerValue++;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp(*this);
    this->_integerValue++;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    return (a > b) ? a : b;
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

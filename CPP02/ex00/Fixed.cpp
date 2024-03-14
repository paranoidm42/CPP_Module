#include "Fixed.hpp"


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


Fixed& Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if(this != &other)
		this->setRawBits(other.getRawBits());
	return *this;
}

void Fixed::setRawBits(int const  raw)
{
	this->_integerValue = raw;
}
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_integerValue;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

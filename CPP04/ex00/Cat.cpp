#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat const init." << std::endl;
	this->setType("Cat");
}


Cat::~Cat()
{
	std::cout << "Cat destructor init." << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Cat copy const init." << std::endl;
	this->setType(other.getType());
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assigmant const init." << std::endl;

	if(this != &other)
	{
		Animal::operator=(other);
		this->setType(other.getType());
	}
	return *this;
}

void Cat::makeSound() const { std::cout << "Meeooowwwwwwwww!!!" << std::endl; }

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog const init." << std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog destructor init." << std::endl;

}
Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy const init." << std::endl;
	this->setType(other.getType());
}
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assigmant const init." << std::endl;

	if(this != &other)
	{
		Animal::operator=(other);
		this->setType(other.getType());
	}
	return *this;
}

void Dog::makeSound() const { std::cout << "Boooowwwwwwww!!!" << std::endl; }

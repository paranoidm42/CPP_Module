#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal const init." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor const init." << std::endl;
}
Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy const init." << std::endl;
	this->setType(other.getType());
}
Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assigmant const init." << std::endl;

	if(this != &other)
	{
		this->setType(other.getType());
	}
	return *this;
}



void Animal::setType(std::string name_type) { this->type = name_type; }
const std::string& Animal::getType() const { return this->type; }

void Animal::makeSound() const { std::cout << "Animal sound" << std::endl; }

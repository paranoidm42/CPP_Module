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
}
Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assigmant const init." << std::endl;

	if(this != &other)
	{

	}
	return *this;
}


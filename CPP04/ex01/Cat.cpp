#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat const init." << std::endl;

	brain = new Brain();
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat destructor init." << std::endl;
	delete brain;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Cat copy const init." << std::endl;
	this->brain = other.brain;
	this->setType(other.getType());
}
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assigmant const init." << std::endl;

	if(this != &other)
	{
		Animal::operator=(other);
		this->brain = other.brain;
		this->setType(other.getType());
	}
	return *this;
}

void Cat::makeSound() const { std::cout << "Meeoowwwwwwww!!!" << std::endl; }

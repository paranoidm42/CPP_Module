#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat const init." << std::endl;
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat destructor const init." << std::endl;

}
Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy const init." << std::endl;
	this->setType(other.getType());
}
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assigmant const init." << std::endl;

	if(this != &other)
	{
		this->setType(other.getType());
	}
	return *this;
}

void Cat::makeSound() const { std::cout << "Meeooowwwwwwwww!!!" << std::endl; }

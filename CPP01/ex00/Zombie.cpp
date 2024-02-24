#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->Name = name;
}

Zombie::~Zombie()
{
	std::cout << "İt was dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->Name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

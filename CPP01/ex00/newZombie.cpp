#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *swap = new Zombie(name);
	return swap;
}

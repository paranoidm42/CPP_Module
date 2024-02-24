#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if(N <= 0)
		return NULL;
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].setName(name);
	return zombie;
}

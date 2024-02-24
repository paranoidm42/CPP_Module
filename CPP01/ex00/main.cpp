#include "Zombie.hpp"

int main()
{
	
	Zombie x("Marvin");
	Zombie *y = newZombie("Arthur");

	y->announce();
	randomChump("Test");

	delete y;
}

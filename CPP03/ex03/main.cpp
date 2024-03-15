#include <iostream>

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Dia");
	std::cout << std::endl;

	DiamondTrap b("Mond");
	std::cout << std::endl;

	DiamondTrap c(a);
	std::cout << std::endl;

	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("someguy");
	c.whoAmI();
	std::cout << std::endl;
	return (0);
}
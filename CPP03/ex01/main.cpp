#include "ScavTrap.hpp"
#include <iostream>


int main()
{
	ClapTrap ct1("Marvin");
	ScavTrap ct2("Arthur");
    ScavTrap ct3 = ct2;

	ct2.guardGate();
	ct2.beRepaired(5);

	ct2.takeDamage(ct1.getAttackP());
	ct2.guardGate();

	ct2.ClapTrap::attack("Marvin");

	std::cout << "Name= " << ct2.getName() << " Attack P: "<<ct2.getAttackP() 
    	<< " Energy P: "<< ct2.getEnergyP() << " Hit P:" << ct2.getHitP() << std::endl;

}
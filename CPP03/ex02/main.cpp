#include "FragTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct1("Marvin");
	FragTrap ct2("Arthur");
    FragTrap ct3 = ct2;

	ct2.highFivesGuys();
	ct2.beRepaired(5);

	ct2.takeDamage(ct1.getAttackP());
	ct2.highFivesGuys();

    std::cout << "Name= " << ct2.getName() << " Attack P: "<<ct2.getAttackP() 
        << " Energy P: "<< ct2.getEnergyP() << " Hit P:" << ct2.getHitP() << std::endl;

}
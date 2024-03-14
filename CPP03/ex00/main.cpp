#include "ClapTrap.hpp"

int main() 
{

    ClapTrap claptrap1("CL4P-TP1");
    claptrap1.setAttackP(25); 

    ClapTrap claptrap2(claptrap1);

    ClapTrap claptrap3("CL4P-TP3");

    claptrap3 = claptrap2;

    claptrap1.attack("Enemy1");
    claptrap2.takeDamage(20);

    claptrap2.attack("Enemy2");
    claptrap3.takeDamage(30);

    claptrap3.beRepaired(15);

    std::cout << "1. ClapTrap - Hit Points: " << claptrap1.getHitP() << ", Energy Points: " << claptrap1.getEnergyP() << ", Attack Points: " << claptrap1.getAttackP() << std::endl;

    std::cout << "2. ClapTrap - Hit Points: " << claptrap2.getHitP() << ", Energy Points: " << claptrap2.getEnergyP() << ", Attack Points: " << claptrap2.getAttackP() << std::endl;

    std::cout << "3. ClapTrap - Hit Points: " << claptrap3.getHitP() << ", Energy Points: " << claptrap3.getEnergyP() << ", Attack Points: " << claptrap3.getAttackP() << std::endl;

    return 0;
}

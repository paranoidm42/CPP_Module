#include " ScavTrap.hpp"



 ScavTrap:: ScavTrap(std::string name) 
{   
    std::cout << " ScavTrap Constructor" << std::endl;

    this->setName(name);
    this->setEnergyP(50);
    this->setAttackP(20);
    this->setHitP(100);
}

 ScavTrap:: ScavTrap( ScavTrap const &other)
{
   	std::cout << " ScavTrap Copy Constructor" << std::endl;
    ClapTrap(other);
}

 ScavTrap&  ScavTrap::operator=(ScavTrap const &other)
 {
    *this = other;

    return *this;
 }


 ScavTrap::~ ScavTrap()
{
    std::cout << "ScavTrap Destructor init!" << std::endl;

}
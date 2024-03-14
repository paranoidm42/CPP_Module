#include "FragTrap.hpp"



FragTrap::FragTrap(std::string name) 
{   
    this->setName(name);
    this->setEnergyP(50);
    this->setAttackP(20);
    this->setHitP(100);
}

FragTrap::FragTrap(FragTrap const &other)
{
   	std::cout << "FragTrap Copy Constructor" << std::endl;
    ClapTrap(other);
}


FragTrap::~FragTrap()
{
    std::cout << "Destructor init!" << std::endl;
}
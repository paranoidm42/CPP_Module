// DiamondTrap.cpp

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(),FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap Default Constructor Called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap Constructor Called!" << std::endl;

    this->_name = name;
    this->ClapTrap::setName(name+"_clap_name");
    this->setAttackP(30);
    this->setEnergyP(50);
    this->setHitP(100);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor Called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    std::cout << "DiamondTrap Copy Constructor Called!" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        this->ClapTrap::operator=(other);
        this->FragTrap::operator=(other); 
        this->ScavTrap::operator=(other); 
        this->_name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name: " << this->_name << " and ClapTrap Name: " << this->ClapTrap::getName() << std::endl;
}

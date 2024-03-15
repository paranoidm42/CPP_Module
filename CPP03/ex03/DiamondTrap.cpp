#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default Constructor Called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Constructor Called!" << std::endl;

    this->_name = name;

    this->ClapTrap::setName(name + "_clap_name");
    this->setAttackP(30);
    this->setEnergyP(50);
    this->setHitP(100);
    
}

DiamondTrap::~DiamondTrap()
{
    
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{

}

void DiamondTrap::attack(std::string const &target)
{

}

void DiamondTrap::whoAmI()
{
    std::cout << "My name: " << this->_name << "and ClapTrap Name: " << this->ClapTrap::getName() << std::endl;

}

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) 
{   
    std::cout << "FragTrap Constructor initialized" << std::endl;

    this->setName(name);
    this->setEnergyP(100);
    this->setAttackP(30);
    this->setHitP(100);
}

FragTrap::FragTrap( FragTrap const &other) :    ClapTrap(other)
{
    *this = other;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor init!" << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->getName() << " want's to high five" << std::endl;
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) 
{   
    std::cout << "ScavTrap Constructor initialized" << std::endl;

    this->setName(name);
    this->setEnergyP(50);
    this->setAttackP(20);
    this->setHitP(100);
}

ScavTrap::ScavTrap( ScavTrap const &other) :    ClapTrap(other)
{
    *this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor init!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->getHitP() > 0 && this->getEnergyP() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target
        << " causing " << this->getAttackP() << " points of damage! " << std::endl;
        this->setEnergyP(-1);
    }
}
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{

}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &clap)
	{
        this->_name = clap._name;
        this->_hit_point = clap._hit_point;
		this->_energy_point = clap._energy_point;
        this->_attack_point = clap._attack_point;
    }

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;

}


void ClapTrap::attack(const std::string& target)
{
	if(_hit_point  > 0 && _energy_point > 0)
	{
		std::cout <<
		this->_energy_point--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int ammount)
{

}

int ClapTrap::getHitP() {return this->_hit_point;}
int ClapTrap::getEnergyP() {return this->_energy_point;}
int ClapTrap::getAttackP() {return this->_attack_point;}

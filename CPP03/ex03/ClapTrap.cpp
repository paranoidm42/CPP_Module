#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	_attack_point = 0;
	_energy_point = 10;
	_hit_point = 10;
	std::cout << "ClapTrap initialized" << std::endl;

}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_attack_point = 0;
	_energy_point = 10;
	_hit_point = 10;
	std::cout << "ClapTrap initialized with name" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap& clap) : _name(clap._name)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->_hit_point = clap._hit_point;
	this->_energy_point = clap._energy_point;
	this->_hit_point = clap._hit_point;

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
        std::cout << "ClapTrap " << this->_name << " attacks " << target
        << " causing " << this->_attack_point << " points of damage! " << std::endl;
		this->_energy_point--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_hit_point  > 0 && _energy_point > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes "
        << amount << " points of damage! " << std::endl;
		this->_hit_point -= amount;

		if(_hit_point <= 0)
			std::cout << "I am dead!!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hit_point  > 0 && _energy_point > 0)
	{
	    std::cout << "ClapTrap " << this->_name << " get health "
        << amount << " points " << std::endl;
		this->_energy_point += amount;
	}
}

int ClapTrap::getHitP() {return this->_hit_point;}
int ClapTrap::getEnergyP() {return this->_energy_point;}
int ClapTrap::getAttackP() {return this->_attack_point;}
std::string ClapTrap::getName() { return this->_name; }

void ClapTrap::setAttackP(int value) { this->_attack_point = value; }
void ClapTrap::setEnergyP(int value) { this->_energy_point = value; }
void ClapTrap::setHitP(int value) { this->_hit_point = value; }
void ClapTrap::setName(std::string name) {this->_name = name;}
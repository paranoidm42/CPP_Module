#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hit_point = 10;
	int	_energy_point = 10;
	int _attack_point = 0;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clap);
	ClapTrap& operator=(const ClapTrap& clap);
	~ClapTrap();

	//subject function
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


	//get function
	int getHitP();
	int getEnergyP();
	int	getAttackP();

};


#endif

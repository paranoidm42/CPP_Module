#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hit_point;
		int	_energy_point;
		int _attack_point;
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

		void setAttackP(const int& value);

};


#endif

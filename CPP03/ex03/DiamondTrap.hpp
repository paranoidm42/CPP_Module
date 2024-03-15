#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
        DiamondTrap &operator=(const DiamondTrap& other);
		~DiamondTrap();
		
		void attack(const std::string& target);
        void whoAmI();
};



#endif

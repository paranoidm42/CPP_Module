#ifndef SCAV_TRAP
#define SCAV_TRAP

#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap( ScavTrap const &other);
        ScavTrap& operator=(ScavTrap const &other);
        ~ScavTrap();
        void guardGate();

        void attack(const std::string &target);
};


#endif
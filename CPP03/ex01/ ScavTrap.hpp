#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap(std::string name);
        ScavTrap( ScavTrap const &other);
        ScavTrap& operator=( ScavTrap const &other);
        ~ScavTrap();
        void guardGate();

};


#endif
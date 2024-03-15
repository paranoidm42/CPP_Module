#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap(std::string name);
        FragTrap( FragTrap const &other);
        FragTrap& operator=(FragTrap const &other);
        ~FragTrap();
        void highFivesGuys(void);
};


#endif
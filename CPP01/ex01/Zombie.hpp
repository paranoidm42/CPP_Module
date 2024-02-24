#ifndef ZOMBIE
#define ZOMBIE


#include <iostream>

class Zombie
{
	private:
		std::string Name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );


#endif

#ifndef HARL
#define HARL


#include <iostream>
#include <algorithm>

class Harl
{
	private:
        void	debug( void );
        void	info( void );
        void	warning( void );
        void	error( void );
	public:
	    void	complain( std::string level );
		Harl();
		~Harl();
};

#endif

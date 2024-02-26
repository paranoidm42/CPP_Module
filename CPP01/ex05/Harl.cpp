#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}
void	Harl::debug( void )
{
	std::cout << "This is [ DEBUG ] message.." << std::endl;
}

void	Harl::info( void )
{
	std::cout << "This is [ INFO ] message.." << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "This is [ WARNING ] message.." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is [ ERROR ] message.." << std::endl;
}
void Harl::complain(std::string level)
{
    std::string av[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = 0;
    while (i < 4) {
        if (std::find(av, av + 4, level) != av + 4)
		{
            (this->*func[i])();
            return;
        }
        i++;
    }
    std::cerr << "[ ERROR ]\n" << "Just use: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"" << std::endl;
}

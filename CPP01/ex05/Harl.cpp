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
    const char* av[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    void (Harl::*command[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (i = 0; i < 4; ++i)
    {
        if (strcmp(level.c_str(), av[i]) == 0)
        {
            (this->*command[i])();
            return;
        }
    }

    std::cerr << "[ ERROR ]\n" << "Just use: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"" << std::endl;
}

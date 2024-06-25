#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac == 2)
        {
            ScalarConverter::convert(av[1]);   
            return 1;
        }   
    }
    catch(std::exception& e)
    {
		std::cout << "impossible" << std::endl;
    } 
    std::cout << "Error: This program accepts only 1 argument!" << std::endl;
    return 0;
}
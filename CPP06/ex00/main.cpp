#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            ScalarConverter::convert(av[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        return 1;
    }
    std::cout << "Error: This program accepts only 1 argument!" << std::endl;
    return 0;
}
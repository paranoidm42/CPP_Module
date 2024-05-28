#include "ScalarConverter.hpp"

int main(int ac, char* av[])
{
    if (ac == 2)
    {
        return 1;
    }
    std::cout << "Error: This program accepts only 1 argument!" << std::endl;
    return 0;
}
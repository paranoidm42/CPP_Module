#include <iostream>
#include <vector>
#include "easyfind.hpp"
#include <cstdlib>

int main()
{
    std::vector<int> number;

    for (int i = 0; i < 10; i++)
    {
        number.push_back(i);    
    }
    
    try
    {
        std::vector<int>::iterator x = easyfind(number, 5);
        std::cout << "Number is = " << *x << std::endl;

        x = easyfind(number, 42);
        std::cout << "Number is = " << *x << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
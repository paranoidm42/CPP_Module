#include "iter.hpp"


int main()
{
    std::string array[] = {"Marvin", "Arthur", "Paranoid", "42", "Wonko"};
    int length = sizeof(array) / sizeof(array[0]);

    iter(array, length, ft_print);

    return 0;
}
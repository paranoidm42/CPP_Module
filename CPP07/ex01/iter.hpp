#pragma once

#include <iostream>

template<typename T>
void ft_print(const T& value)
{
    std::cout << value << std::endl;
}

template<typename T>
void iter(const T *adr, int len, void(*func)(const T&)) 
{
    for (int i = 0; i < len; i++)
        func(adr[i]);
}


#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>
#include <cctype>

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();

        ScalarConverter &operator=(const ScalarConverter& other);
        ScalarConverter(const ScalarConverter& other);
        // Statik fonksiyonlar olacağı için nesne oluşturmamalı.        

    public:
};


#pragma once

#include <iostream>
#include <exception>


class ScalarConverter
{
    private:
        const std::string _char;
        int _int;
        float _float;
        double _double; 

    public:
        ScalarConverter();
        ~ScalarConverter();

        ScalarConverter &operator=(const ScalarConverter& other);
        ScalarConverter(const ScalarConverter& other);
};


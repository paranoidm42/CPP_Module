#include "ScalarConverter.hpp"



ScalarConverter::ScalarConverter(/* args */)
{
    std::cout << "Wake up Scaler!!!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if(this != &other)
    {
        
    }
    
    return *this;
}


ScalarConverter::~ScalarConverter()
{
    std::cout << "Time to die!!" << std::endl;
}

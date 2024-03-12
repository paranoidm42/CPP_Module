#include "Test.hpp"


Test::Test()
{
    std::cout << "Object Created.." << std::endl;
}

Test::~Test()
{    
    std::cout << "Object Destroyed!!" << std::endl;
}

Test::Test(const Test& other)
{
    std::cout << "Object Created with Copy Constructor.." << std::endl;
}



Test& Test::operator=(const Test& other)
{
    if(this != &other)
    {
        std::cout << "Object Assigment with Assigmant Operator Overloading.." << std::endl;
    }
    return *this;
}
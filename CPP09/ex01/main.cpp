#include "RPN.hpp"



int main(int argc, char* argv[]) 
{
    if (argc != 2) 
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    if (!processRPN(input)) 
    {
        return 1;
    }

    return 0;
}
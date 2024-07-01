#include "RPN.hpp"


bool isOperator(char c) 
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

bool isNumber(const std::string& token) 
{
    return token.length() == 1 && std::isdigit(token[0]);
}

bool isValidToken(const std::string& token) 
{
    return isNumber(token) || (token.length() == 1 && isOperator(token[0]));
}

bool processRPN(const std::string& input) 
{
    std::istringstream iss(input);
    std::string token;
    std::stack<int> stack;

    while (iss >> token) 
    {
        if (!isValidToken(token)) 
        {
            std::cerr << "Error: Invalid token '" << token << "'" << std::endl;
            return false;
        }

        if (isNumber(token)) 
        {
            stack.push(token[0] - '0');
        } 
        else if (isOperator(token[0])) 
        {
            if (stack.size() < 2) 
            {
                std::cerr << "Error: Not enough operands for operator '" << token << "'" << std::endl;
                return false;
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            switch (token[0]) 
            {
                case '+': 
                    stack.push(a + b); break;
                case '-': 
                    stack.push(a - b); break;
                case '*': 
                    stack.push(a * b); break;
                case '/':

                    if (b == 0) {
                        std::cerr << "Error: Division by zero" << std::endl;
                        return false;
                    }
                    stack.push(a / b);
                    break;
                default: 
                    break;
            }
        }
    }

    if (stack.size() != 1) 
    {
        std::cerr << "Error: Invalid RPN expression" << std::endl;
        return false;
    }

    std::cout << stack.top() << std::endl;
    return true;
}
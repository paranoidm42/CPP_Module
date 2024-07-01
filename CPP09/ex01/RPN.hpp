#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <cctype>

bool processRPN(const std::string& input);
bool isValidToken(const std::string& token);

#endif 

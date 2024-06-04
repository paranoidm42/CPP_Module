#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
    std::cout << "Wake up Scaler!!! NEVER!!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if(this != &other)
    {
        *this = other;
    }
    return *this;
}


ScalarConverter::~ScalarConverter()
{
    std::cout << "Time to die!!" << std::endl;
}


bool is_pseudo(const std::string input)
{
    if (input == "nanf" || input == "-inff" || input == "+inff" || input == "nan" || \
		input == "-inf" || input == "+inf" || input == "inf")
		return true;
	return false;
}


void	printpseudo(std::string input)
{
	if (is_pseudo(input))
	{
		std::cout << "char: " << "impossible" << "\n";
		std::cout << "int: " << "impossible" << "\n";
		std::cout << "float: " << ((input[input.size() - 1] == 'f') ? input : (input + 'f')) << std::endl;
		std::cout << "input: " << input << "\n";
	}
}


void ScalarConverter::convert(std::string input)
{
    if (input.length() <= 0)
    {
        std::cout << "Empty input" << std::endl;
        return ;
    }
    if (is_pseudo(input))
        return printpseudo(input);

    ScalarConverter::toChar(input);
    ScalarConverter::toInt(input);
    ScalarConverter::toFloat(input);
    ScalarConverter::toDouble(input);

}


void ScalarConverter::toChar(std::string input)
{
    std::cout << "char: " ;
    try
    {
        if(input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
            std::cout << "'" <<static_cast<char>(input[0]) << "'" << std::endl;
        else if(std::isprint(static_cast<char>(std::atoi(input.c_str()))))
        	std::cout << "'" << static_cast<char>(std::atoi(input.c_str())) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "impossible" << std::endl;
    }
    
}

void	ScalarConverter::toInt(std::string input)
{
	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(std::atoi(input.c_str())) << std::endl;
	}
	catch (std::exception &e)
	{
		if (input.length() == 1 && std::isprint(input[0]))
			std::cout << static_cast<int>(input[0]) << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::toFloat(std::string input)
{
	std::cout << "float: ";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(std::atof(input.c_str())) << "f" <<  std::endl;
	}
	catch (std::exception &e)
	{
		if (input.length() == 1 && std::isprint(input[0]))
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(input[0])<< "f" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::toDouble(std::string input)
{
	std::cout << "double: ";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(std::atof(input.c_str())) << std::endl;
	}
	catch (std::exception &e)
	{
		if (input.length() == 1 && std::isprint(input[0]))
			std::cout << std::fixed << std::setprecision(1) << static_cast<double>(input[0]) << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

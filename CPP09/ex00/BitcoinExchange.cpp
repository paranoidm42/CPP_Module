#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& other) {
    this->dataBase = other.dataBase;
    return *this;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& other) {
    *this = other;
}

void BitcoinExchange::parseFileData(std::ifstream &fileData)
{
    std::string line;

    std::getline(fileData, line);

    while (std::getline(fileData, line)) {
        std::size_t commaPosition = line.find(',');

        std::string key = line.substr(0, commaPosition);
        std::string valueStr = line.substr(commaPosition + 1);
        
        float value = ft_stof(valueStr);

        this->dataBase[key] = value;
    }

    fileData.close();
}


bool  BitcoinExchange::isvalidValue(const std::string input)
{
    int sign = 0;

    if(input.empty())
    {
        std::cerr << "Error: empty value!" <<std::endl;
        return false;
    }

    bool hasDecimalPoint = false;
    bool hasDigit = false;


    if(input[0] == '-' || input[0] == '+')
        sign++;

    for (int i = sign; i < (int)input.length(); i++) 
    {
        if (std::isdigit(input[i]))
            hasDigit = true;
        else if (input[i] == '.' && !hasDecimalPoint) 
            hasDecimalPoint = true;
        else if (input[i] == 'f' && i == (int)input.length() - 1)
            continue;
        else
        {
            std::cerr << "Error: not a valid number: " << input << std::endl;
            return false;
        }
    }
    
    if (!hasDigit) 
    {
        std::cerr << "Error: not a valid number: " << input << std::endl;
        return false;
    }

    std::stringstream ss(input);
    float num;
    ss >> num;
    if (ss.fail() || !ss.eof()) 
    {
        std::cerr << "Error: conversion failed for: " << input << std::endl;
        return false;
    }

    if (num >= 1000) 
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    else if(num < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }

    return true;
}


bool  BitcoinExchange::isvalidDate(const std::string input)
{
    if(input.empty())
    {
        std::cerr << "Error:empty!" << std::endl;
        return false;
    }
    if (input.length() != 10 || input[4] != '-' || input[7] != '-') {
        std::cerr << "Error: not a valid date format: " << input << std::endl;
        return false;
    }

    for (int i = 0; i < 10; ++i) 
    {
        if (i == 4 || i == 7) 
            continue;
        if (!std::isdigit(input[i])) {
            std::cerr << "Error: date contains non-digit characters: " << input << std::endl;
            return false;
        }
    }

    int year = std::atoi(input.substr(0, 4).c_str());
    int month = std::atoi(input.substr(5, 2).c_str());
    int day = std::atoi(input.substr(8, 2).c_str());

    if (year < 2009 || year > 2024) 
    {
        std::cerr << "Error: year out of range: " << year << std::endl;
        return false;
    }
    if (month < 1 || month > 12) {
        std::cerr << "Error: month out of range: " << month << std::endl;
        return false;
    }
    if (day < 1 || day > 31) {
        std::cerr << "Error: day out of range: " << day << std::endl;
        return false;
    }

    if (month == 2) {
        bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
            std::cerr << "Error: day out of range for February: " << day << std::endl;
            return false;
        }
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        std::cerr << "Error: day out of range for month: " << day << std::endl;
        return false;
    }
    return true;

}



std::string BitcoinExchange::trim(const std::string& str) 
{
    std::string::size_type first = 0;
    while (first < str.length() && std::isspace(str[first])) 
        ++first;
    
    std::string::size_type last = str.length() - 1;                                                        
    while (last > 0 && std::isspace(str[last])) 
        --last;
    
    if (last >= first) 
        return str.substr(first, last - first + 1);
    else 
        return "";
}



float BitcoinExchange::rateindatafile(const std::string &date)
{
                             
    if (this->dataBase.count(date) > 0)
        return this->dataBase.at(date);
    return (--this->dataBase.lower_bound(date))->second;
}





// FINAL PROCESS

void BitcoinExchange::processInputFile(const std::string& inputFilename) 
{

    std::ifstream file(inputFilename.c_str());
    if (!file.is_open() || file.peek() == EOF) 
        throw std::runtime_error("Opening input file failed or empty file.");
    

    std::ifstream filedata("data.csv");
    if (!filedata.is_open() || file.peek() == EOF) 
        throw std::runtime_error("Opening data file failed or empty.");
    

    parseFileData(filedata);

    std::string line;
    std::getline(file, line);

    if (line != "date | value") 
        throw std::runtime_error("INVALID FILE FORMAT!");

    while (std::getline(file, line))
    {
        if(line.empty())
            std::cout << "There empty line.." << std::endl;

        std::size_t pipe = line.find("|");
        if (pipe == std::string::npos) 
        {
                std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }


        std::string date = trim(line.substr(0, pipe));
        std::string value = trim(line.substr(pipe + 1));

        if(!isvalidDate(date))
            continue;

        if (!isvalidValue(value))
            continue;
            
        float rate = ft_stof(value);

        std::cout << date << " => " << rate << " = " << rate * rateindatafile(date) << std::endl;
        
    }

}





// EXTRA

float ft_stof(const std::string& str)
{ 
    float num;
    std::stringstream ss(str);                                                                                     
    ss >> num;
    return num;
}


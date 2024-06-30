#ifndef BTC
#define BTC

#include <iostream>
#include <fstream>
#include <sstream> 
#include <string>
#include <map>
#include <cctype> 
#include <algorithm> 

class BitcoinExchange
{
    private:
        std::map<std::string, float> dataBase;

        void parseFileData(std::ifstream &fileData);
        bool  isvalidValue(const std::string input);
        bool  isvalidDate(const std::string input);
        std::string trim(const std::string& str);

        float rateindatafile(const std::string &date);

    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange& operator=(BitcoinExchange& other);
        BitcoinExchange(BitcoinExchange& other);

        void processInputFile(const std::string& inputFilename);
        
};


float ft_stof(const std::string& str);



#endif
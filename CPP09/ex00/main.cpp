#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

    if(ac != 2)
    {
        std::cout << "\33[31m" << "Error:" << "\33[33m" << " could not open file." << std::endl;
        return (0);
    }

    try
    {
        BitcoinExchange exchange;
        exchange.processInputFile(av[1]);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return (1);
}
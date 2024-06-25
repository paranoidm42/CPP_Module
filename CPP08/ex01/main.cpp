#include "Span.hpp"

int main()
{

    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Short: " << sp.shortestSpan() << std::endl;
        std::cout << "Long: " << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "There is an error!!" << '\n';
    }
    std::cout << "-------------" << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(5,100);

        std::cout << "Short: " << sp.shortestSpan() << std::endl;
        std::cout << "Long: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "There is an error!!" << std::endl;
    }

    return 0;
}
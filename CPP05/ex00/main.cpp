# include "./Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat Nelson("Nelson", 100);
        Nelson.increment();
        std::cout << Nelson << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    try
    {
        Bureaucrat Nelson("Nelson", -10);
        Nelson.decrement();
        std::cout << Nelson << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    return (0);
}
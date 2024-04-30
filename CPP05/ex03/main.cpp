#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    Bureaucrat a("Marvin", 42);
    a.signAForm(*rrf);
    a.executeForm(*rrf);
    delete rrf;

    AForm* zpf;
    try 
    {
        zpf = someRandomIntern.makeForm("some random form", "xd");
        delete zpf;
    } 
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
}

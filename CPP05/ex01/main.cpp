#include "Bureaucrat.hpp"

int main()
{
    {
        Bureaucrat b("Marvin");
        try {
            Form a("Invalid Form", 0, 100);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Bureaucrat a("Arthur", 20);
        Form f("Military Form", 20, 10);
        std::cout << f;
        a.signForm(f);
        std::cout << f;
    }
    {
        Bureaucrat b("Beeblebrox", 50);
        Form f("Education Form", 40, 20);
        std::cout << f;
        b.signForm(f);
        std::cout << f;
    }

}

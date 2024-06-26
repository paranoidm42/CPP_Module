#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
    private:
        const std::string _name;
        size_t _grade;
        void setGrade(int n);
    public:
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, size_t grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat& copy);
        std::string getName(void) const;
        size_t getGrade(void) const;
        void increment(void);
        void decrement(void);
        class GradeTooHighException: public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& o, const Bureaucrat& b);
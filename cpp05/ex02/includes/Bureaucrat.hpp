#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
    private :
    std::string  _name;
    int                 _grade;

    public : 
        Bureaucrat ();
        Bureaucrat(const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        Bureaucrat operator=(const Bureaucrat& other);
        void signForm (AForm form);
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other);

#endif

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
    private :
        std::string const   _name;
        bool                _isSigned; 
        const int        _gradeToSign;
        const int         _gradeToExecute;
    public :
        Form();
        Form(const Form& other);
        Form &operator=(const Form& other);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExectute() const ;
        void beSigned(Bureaucrat b);
        ~Form();
};

std::ostream& operator<<(std::ostream& out, const Form& other);

#endif
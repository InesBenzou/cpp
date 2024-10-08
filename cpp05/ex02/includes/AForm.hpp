#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
    private :
        std::string const   _name;
        bool                _isSigned ; 
        const int        _gradeToSign;
        const int         _gradeToExecute;
    public :
        AForm();
        AForm(const AForm& other);
        AForm &operator=(const AForm& other);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExectute() const ;
        void beSigned(Bureaucrat b);
        ~AForm();
};

std::ostream& operator<<(std::ostream& out, const AForm& other);

#endif
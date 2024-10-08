#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "Jean";
    _grade = 151;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::string name;
    name = other.getName();
    _name = name;
    _grade = other._grade;
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat& other)
{
    std::string name;
    name = other.getName();
    _name = name;
    _grade = other._grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    class GradeTooHighException : public std::exception
    {
        public :
        virtual const char* what() const throw ()
        {
            return ("Invalid grade : incrementation impossible");
        }
    };

    try 
    {
        if (_grade <= 1)
            throw GradeTooHighException();
        else 
        {
            _grade--;
            return;
        }
    }
    catch (GradeTooHighException& e)
    {
        std::string error;
        error = e.what();
        std::cout << error << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    class GradeTooLowException : public std::exception
    {
        public :
        virtual const char* what() const throw ()
        {
            return ("Invalid grade : incrementation impossible");
        }
    };

    try 
    {
        if (_grade >= 150)
            throw GradeTooLowException();
        else 
        {
            _grade++;
            return;
        }
    }
    catch (GradeTooLowException& e)
    {
        std::string error;
        error = e.what();
        std::cout << error << std::endl;
    }
}
 

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other)
{
    out << other.getName() << " bureaucrat grade " << other.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat()
{

}
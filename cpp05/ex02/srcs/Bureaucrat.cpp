#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Exceptions.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "Jean";
    _grade = 100;
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
 
void Bureaucrat::signForm(AForm& form)
{
    // if (form.getIsSigned() == true)
    //     std::cout << _name << " already signed " << form.getName() << std::endl;
    // else
	// {
	// 	if (_grade < 1 || _grade > 150)
	// 		std::cout << _name << " couldn't sign " << form.getName() << " bcause bureaucrat's grade is invalid"<< std::endl;
	// 	else
	// 	{
	// 	if (_grade <= form.getGradeToSign())
	// 	{
	// 		form.setIsSigned(true);
	// 		std::cout << _name << " signed " << form.getName() << std::endl;
	// 	}
	// 	else
    //     	std::cout << _name << " couldn't sign because bureaucrat grade is " << _grade <<". To be able to sign, it must be <= " << form.getGradeToSign() << std::endl;
	// 	}
	// }
	try
	{
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
	catch (std::exception &e)
	{
        std::cout << _name << " couldn’t sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other)
{
    out << other.getName() << " bureaucrat grade " << other.getGrade();
    return out;
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() 
				<< " because " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}
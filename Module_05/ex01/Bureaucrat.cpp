#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    
}
/*QUA GESTISCI LE ECCEZIONI, anche in increment e decrement*/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
    std::cout << GREEN "Bureaucrat " << BOLDGREEN << name << RESET << GREEN " born!" RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
    std::cout <<  GREEN "Copy costructor for Bureaucrat called." RESET << std::endl;
    *this = rhs;
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<  RED "Destructor for Bureaucrat " << BOLDRED << this->getName() << RED " called." RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs )
		_grade = rhs.getGrade();
	return *this;
}

std::string const Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
    std::cout << CYAN << this->getName() << " Incremented his grade." RESET << std::endl;
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
    std::cout << BLUE << this->getName() << " Decremented his grade." RESET << std::endl;
	this->_grade++;

}

std::ostream & operator<<(std::ostream &ost, Bureaucrat const & i)
{
	ost << i.getName() << ", bureaucrat grade " << i.getGrade();
	return ost;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
        form.beSigned( *this );
        std::cout << *this << " signed " << form.get_name() << std::endl;
    }
	catch (Form::GradeTooLowException &e)
	{
        std::cout << _name << " coulnd't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
}
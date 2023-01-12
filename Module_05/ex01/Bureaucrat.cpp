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

void Form::SigneForm(const Bureaucrat &bur)
{
    Bureaucrat::GradeTooHighException a;
    try
    {
        beSigned(bur);
        std::cout << YELLOW << bur.getName() << " signed " << this->_name << " form." << RESET << std::endl;
        return ;
    }
    catch (Bureaucrat::GradeTooHighException &a){}
    catch (Bureaucrat::GradeTooLowException &a){}
    std::cout << YELLOW << bur.getName() << " can't sign " << this->_name << " form because" << a.what() << RESET << std::endl;
}
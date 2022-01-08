#include "Bureaucrat.hpp"

// Canonical

Bureaucrat::Bureaucrat(string name, int grade) {
	cout << BG_GREEN << " Bureaucrat constructor called " << DEFAULT << endl;
	_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
	cout << BG_YELLOW  << " Bureaucrat copy called " << DEFAULT << endl;
	*this = copy;
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& tmp) {
	cout << BG_MAGENTA << " Bureaucrat [=] operator called " << DEFAULT << endl;
	this->_name = tmp._name;
	this->_grade = tmp._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	cout << BG_RED << " Bureaucrat destructor called " << DEFAULT << endl;
}

// Getters

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

string	Bureaucrat::getName() const {
	return (this->_name);
}

// Increments

void	Bureaucrat::gradeIncrement() {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::gradeDecrement() {
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade is too low!");
}

// Methods

ostream&	operator<<(ostream &out, const Bureaucrat &bur) {
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (out);
}

void	signForm() {
		cout << BR_RED << bur.getName() << " cannot sign  " << this->_name << "because his grade is too low." << DEFAULT << endl;
}

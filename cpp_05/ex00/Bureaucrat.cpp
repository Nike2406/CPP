#include "Bureaucrat.hpp"

// Canonical

Bureaucrat::Bureaucrat(void) {
	cout << "Bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
	cout << "Bureaucrat copy called\n";
	*this = copy;
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& tmp) {
	cout << "Bureaucrat [=] operator called\n";
	this->_name = tmp._name;
	this->_grade = tmp._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	cout << "Bureaucrat destructor called\n";
}

// Getters

int	Bureaucrat::getGrade() {
	return (this->_grade);
}

string	Bureaucrat::getName() {
	return (this->_name);
}

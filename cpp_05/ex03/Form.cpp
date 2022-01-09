#include "Form.hpp"

// Canonical

Form::Form(string name, int gradeToSign, int gradeToExecute) :
	_name(name),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute) {
	cout << BG_GREEN << " Form constructor called " << DEFAULT << endl;
	_signed = false;
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & copy) :
	_name(copy._name),
	_gradeToSign(copy._gradeToSign),
	_gradeToExecute(copy._gradeToExecute),
	_signed(copy._signed) {
	cout << BG_YELLOW  << " Form copy called " << DEFAULT << endl;
}

Form const& Form::operator=(Form const &copy) {
	// CONSTS!!!
	this->_signed = copy._signed;
	return (*this);
}

Form::~Form()
{
	cout << BG_RED << " Form destructor called " << DEFAULT << endl;
}

// Getters

string	Form::getName() const {
	return (this->_name);
}

int		Form::getGradeToSign() const {
	return (this->_gradeToSign);
}
int		Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}
bool	Form::getSigned() const {
	return (this->_signed);
}

// Methods

void	Form::beSigned(Bureaucrat &bur) {
	if (this->getSigned() == true) {
		return;
	}
	if (bur.getGrade() <= this->_gradeToSign){
		this->_signed = true;
		cout << BR_GREEN << bur.getName() << " signs " << this->_name << DEFAULT << endl;
	}
	else {
		throw GradeTooLowException();
	}
}

ostream&	operator<<(ostream &out, const Form &form) {
	out << "Form name: " << form.getName()
	<< "; Grade to sign: " << form.getGradeToSign() <<
	"; Grade to execute: " << form.getGradeToExecute() <<
	"; Signed: " << boolalpha << form.getSigned() <<
	";";
	return (out);
}

// Exceptions

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw() {
	return ("The grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("The grade is too low!");
}

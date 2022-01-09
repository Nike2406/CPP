#include "Intern.hpp"
#include "Form.hpp"

// Canonical

Intern::Intern() {
	cout << BG_GREEN << " Intern constructor called " << DEFAULT << endl;
	this->_formNameArray[0] = "Shrubberry form";
	this->_formNameArray[1] = "Robotomy form";
	this->_formNameArray[2] = "Presidential form";

	this->_getFormFunc[0] = &Intern::_newShrubberry;
	this->_getFormFunc[1] = &Intern::_newRobotomy;
	this->_getFormFunc[2] = &Intern::_newPresidential;
}

Intern::Intern(Intern const & copy) {
	cout << BG_YELLOW  << " Intern copy called " << DEFAULT << endl;
	*this = copy;
}

Intern const& Intern::operator=(Intern const&) {
	cout << BG_MAGENTA << " Intern [=] operator called " << DEFAULT << endl;
	return *this;
}

Intern::~Intern()
{
	cout << BG_RED << " Intern destructor called " << DEFAULT << endl;
}

// Methods

Form	*Intern::_newShrubberry(string formTarget) {
	return (new ShrubberyCreationForm(formTarget));
}
Form	*Intern::_newRobotomy(string formTarget) {
	return (new RobotomyRequestForm(formTarget));
}
Form	*Intern::_newPresidential(string formTarget) {
	return (new PresidentialPardonForm(formTarget));
}

Form	*Intern::makeForm(string formName, string formTarget) {
	for (int i = 0; i < 3; i++) {
		if (formName == this->_formNameArray[i]) {
			cout << CYAN << "Intern creates " << formName << DEFAULT << endl;
			return ((this->*_getFormFunc[i])(formTarget));
		}
	}
	cout << BR_RED << "Intern can't create  " << formName << DEFAULT << endl;
	throw InternFailedException();
	return NULL;
}

// Exceptions

Intern::InternFailedException::InternFailedException() {}
Intern::InternFailedException::~InternFailedException() throw() {}

const char *Intern::InternFailedException::what() const throw() {
	return ("Intern exception!");
}

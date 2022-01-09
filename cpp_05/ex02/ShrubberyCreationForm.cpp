#include "ShrubberyCreationForm.hpp"

// Canonical

ShrubberyCreationForm::ShrubberyCreationForm(string target) :
	Form ("ShrubberyCreationForm", 145, 137),
	_target(target)
	{
	cout << BG_GREEN << " ShrubberyCreationForm constructor called " << DEFAULT << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) :
	Form (copy.getName(), copy.getSigned(), copy.getGradeToExecute())
{
	cout << BG_YELLOW  << " ShrubberyCreationForm copy called " << DEFAULT << endl;
	this->_target = copy._target;
	(*this) = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << BG_RED << " ShrubberyCreationForm destructor called " << DEFAULT << endl;
}
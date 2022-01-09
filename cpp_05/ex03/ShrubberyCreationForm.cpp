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

ShrubberyCreationForm const& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy) {
	cout << BG_YELLOW  << " ShrubberyCreationForm equal called " << DEFAULT << endl;
	if (this == &copy)
		return (*this);
	this->_target = copy._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << BG_RED << " ShrubberyCreationForm destructor called " << DEFAULT << endl;
}

// Methods

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	std::ofstream	fout;
	string			filename;
	string			buf;

	if (executor.getGrade() <= this->getGradeToExecute() &&
		this->getSigned() == true) {
			buf = "¯\\_(ツ)_/¯";
	filename = this->_target + "_shrubbery";
	fout.open(filename);
	fout << buf;
	fout.close();
	} else if (this->getSigned() == false) {
		throw ("The form didn't sign!");
	} else
		throw Bureaucrat::GradeTooLowException();
}

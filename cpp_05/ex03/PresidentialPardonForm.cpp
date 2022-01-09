#include "PresidentialPardonForm.hpp"

// Canonical

PresidentialPardonForm::PresidentialPardonForm(string target) :
	Form ("Zafod Beeblebrox", 25, 5),
	_target(target)
	{
	cout << BG_GREEN << " PresidentialPardonForm constructor called " << DEFAULT << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) :
	Form (copy.getName(), copy.getSigned(), copy.getGradeToExecute())
{
	cout << BG_YELLOW  << " PresidentialPardonForm copy called " << DEFAULT << endl;
	this->_target = copy._target;
	(*this) = copy;
}

PresidentialPardonForm const& PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) {
	cout << BG_YELLOW  << " PresidentialPardonForm equal called " << DEFAULT << endl;
	if (this == &copy)
		return (*this);
	this->_target = copy._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << BG_RED << " PresidentialPardonForm destructor called " << DEFAULT << endl;
}

// Methods

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getGradeToExecute() &&
		this->getSigned() == true) {
		cout << this->_target << " has been pardoned by Zafod Beeblebrox." << DEFAULT << endl;
	} else if (this->getSigned() == false) {
		throw ("The form didn't sign!");
	} else
		throw Bureaucrat::GradeTooLowException();
}

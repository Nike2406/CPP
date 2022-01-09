#include "RobotomyRequestForm.hpp"

// Canonical

RobotomyRequestForm::RobotomyRequestForm(string target) :
	Form ("RobotomyRequestForm", 72, 45),
	_target(target)
	{
	cout << BG_GREEN << " RobotomyRequestForm constructor called " << DEFAULT << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) :
	Form (copy.getName(), copy.getSigned(), copy.getGradeToExecute())
{
	cout << BG_YELLOW  << " RobotomyRequestForm copy called " << DEFAULT << endl;
	this->_target = copy._target;
	(*this) = copy;
}

RobotomyRequestForm const& RobotomyRequestForm::operator=(RobotomyRequestForm const &copy) {
	cout << BG_YELLOW  << " RobotomyRequestForm equal called " << DEFAULT << endl;
	if (this == &copy)
		return (*this);
	this->_target = copy._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << BG_RED << " RobotomyRequestForm destructor called " << DEFAULT << endl;
}

// Methods

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getGradeToExecute() &&
		this->getSigned() == true) {
		srand(time(0));
		cout << CYAN << "Bzzz.... chreck! ... bzzz\n";
		if (rand() % 2 == 0)
			cout << this->_target << " has been robotomized" << BR_GREEN << " successfull";
		else
			cout <<  this->_target << " robotomized" << BR_RED << " failed";
		cout << DEFAULT << endl;
	} else if (this->getSigned() == false) {
		throw ("The form didn't sign!");
	} else
		throw Bureaucrat::GradeTooLowException();
}

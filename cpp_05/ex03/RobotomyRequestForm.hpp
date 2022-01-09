#include "Form.hpp"
#pragma once
#include <ctime>

class RobotomyRequestForm : public Form
{
private:
	string	_target;
public:
	RobotomyRequestForm(string	target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	RobotomyRequestForm const& operator=(RobotomyRequestForm const &);
	~RobotomyRequestForm();

	void	execute(const Bureaucrat &executor) const;
};

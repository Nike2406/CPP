#include "Form.hpp"
#pragma once

class PresidentialPardonForm : public Form
{
private:
	string	_target;
public:
	PresidentialPardonForm(string target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	PresidentialPardonForm const& operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm();

	void	execute(const Bureaucrat &executor) const;
};

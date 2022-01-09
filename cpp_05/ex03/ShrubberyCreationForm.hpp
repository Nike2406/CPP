#include "Form.hpp"
#pragma once
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	string	_target;
public:
	ShrubberyCreationForm(string	target);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	ShrubberyCreationForm const& operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();

	void	execute(const Bureaucrat &executor) const;
};

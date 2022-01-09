#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#pragma once

class Intern
{
private:
	string	_formNameArray[3];
	Form	*(Intern::*_getFormFunc[3])(string formTarget);

	Form	*_newShrubberry(string formTarget);
	Form	*_newRobotomy(string formTarget);
	Form	*_newPresidential(string formTarget);
public:
	Intern();
	Intern(Intern const & copy);
	Intern const& operator=(Intern const &);
	~Intern();

	Form	*makeForm(string formName, string formTarget);

	class InternFailedException : public exception
	{
		public:
			InternFailedException();
			virtual ~InternFailedException() throw();

			const char *what() const throw();
	};
};

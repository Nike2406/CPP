#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main() {
	Bureaucrat me("Wooo", 20);

	Intern a;
	try
	{
	Form * f = a.makeForm("Presidential form", "Raw");

	std:: cout << *f << std::endl;
	me.signForm(*f);
		f->execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
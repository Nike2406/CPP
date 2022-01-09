#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main() {
	Bureaucrat me("Petrovich", 135);
	ShrubberyCreationForm form_sh("home");
	cout << form_sh << endl;
	me.signForm(form_sh);
	cout << endl << form_sh << endl;
	try
	{
		form_sh.execute(me);
		me.executeForm(form_sh);
	}
	catch (const char * er)
	{
		cout << er << endl;
	}
	catch (exception & ex)
	{
		cout << ex.what() << endl;
	}

	cout << "-------------------------------------------" << endl;
	Bureaucrat me2("Nikolaich", 40);
	RobotomyRequestForm form_rob("Roba");
	me2.signForm(form_rob);
	cout << endl << form_rob << endl;
	try
	{
		form_rob.execute(me2);
	}
	catch (const char * er)
	{
		cout << er << endl;
	}
	catch (exception & ex)
	{
		cout << ex.what() << endl;
	}

	cout << "------------------------------------------" << endl << endl;
	Bureaucrat me3("Petrovichya", 30);
	PresidentialPardonForm form_pres("Chelovek");
	me3.signForm(form_pres);
	cout << endl << form_pres << endl;
	try
	{
		form_pres.execute(me3);
	}
	catch (const char * er)
	{
		cout << er << endl;
	}
	catch (exception & ex)
	{
		cout << ex.what() << endl;
	}

	cout << "------------------------------------------" << endl;
	Bureaucrat me4("Il'ich", 1);
	PresidentialPardonForm form_pres2("Elvis");
	me4.signForm(form_pres2);
	me4.executeForm(form_pres2);

	return (0);
}
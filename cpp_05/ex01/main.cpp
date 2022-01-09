#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try
	{
		Bureaucrat a("Artemiy", 1);
		cout << a << endl;
		a.gradeDecrement();
		cout << a << endl;
		a.gradeIncrement();
		cout << a << endl;
		a.gradeDecrement();
		cout << a << endl;
		cout << "ALL OK" << endl;
	}
	catch (exception & ex)
	{
		cout << ex.what() << endl;
	}
	cout << "----------------------" << endl;
	try
	{
		Bureaucrat b("Vasiliy", 150);
		cout << b << endl;
		b.gradeDecrement();
		cout << b << endl;
		b.gradeIncrement();
		cout << b << endl;
		b.gradeDecrement();
		cout << b << endl;
		b.gradeDecrement();
		cout << b << endl;
		cout << "ALL OK" << endl;
	}
	catch (exception & ex)
	{
		cout << ex.what() << endl;
	}

	// Bureaucrat c("Petrovich", 151);

	cout << "----------------------" << endl;

	try
	{
		Form b("f1", 0, 15); // FAIL
		Form c(b);
		cout << b << endl;
		cout << c << endl;
	}
	catch (exception & ex)
	{
		cout<< ex.what() << endl;
	}

	try
	{
		Form b("f1", 100, 151); // FAIL
		cout << b << endl;
	}
	catch (exception & ex)
	{
		cout<< ex.what()<< endl;
	}

	try
	{
		Form b("f1", 100, 151); // FAIL
		cout << b << endl;
	}
	catch (exception & ex)
	{
		cout<< ex.what()<< endl;
	}

	cout << endl;
	Form b("f1", 100, 15);
	Bureaucrat b2("Milan", 10);
	b2.signForm(b);
	cout << endl << b << endl;

	cout << endl;
	Form c("f2", 100, 15); // подписываем
	Bureaucrat c2("Valeriy", 100);
	c2.signForm(c);
	c2.signForm(c); // нельзя второй раз подписать
	cout << endl << c << endl;

	cout << endl;
	Form e("f3", 100, 15); // подписываем
	Bureaucrat e3("Baiden", 101);
	e3.signForm(e);
	cout << endl << e << endl;
	cout << e3 << endl;
	e3.gradeIncrement();
	e3.signForm(e);

	return (0);
}
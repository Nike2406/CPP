#include "Bureaucrat.hpp"

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
	return (0);
}
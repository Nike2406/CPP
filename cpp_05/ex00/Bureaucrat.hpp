#pragma once

#include <iostream>
#include <string>

#define DEFAULT	"\033[0m"
#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"

using std::cout;
using std::endl;
using std::string;
using std::exception;
using std::ostream;

class Bureaucrat
{
private:
	string	_name;
	int		_grade;
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat const& operator=(Bureaucrat const &);
	~Bureaucrat();

	string	getName();
	int		getGrade();

	class GradeTooHighException : public exception {};
	class GradeTooLowException : public exception {};


};

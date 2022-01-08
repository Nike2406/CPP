#include "Bureaucrat.hpp"

class Form
{
private:
	const string	_name;
	const int		_gradeToSign;
	const int		_gradeToExecute;
	bool			_signed;
public:
	Form(
		string	name,
		int		_gradeToSign,
		int		_gradeToExecute
	);
	Form(Form const & copy);
	Form const& operator=(Form const &);
	~Form();

	string	getName() const;
	int		getGradeToSign() const;
	int		getGradeToExecute() const;
	bool	getSigned() const;

	void	beSigned(Bureaucrat &bur);

	// Exeptions
	class GradeTooHighException : public exception {
		public:
			GradeTooHighException();
			~GradeTooHighException() throw();

			const char *what() const throw();
	};
	class GradeTooLowException : public exception {
		public:
			GradeTooLowException();
			~GradeTooLowException() throw();

			const char *what() const throw();
	};
};

ostream&	operator<<(ostream &out, const Form &form);

#include <iostream>
#include <string>

class Student {
	private:
		std::string	_login;
	public:
		Student(std::string login) : _login(login) {
			std::cout << "Student " << this->_login << " is born " << std::endl;
		}

		~Student() {
			std::cout << "Student " << this->_login << " is died " << std::endl;
		}
};

int	main() {
	Student		bob = Student("Bob");
	Student*	jim = new Student("Jim");
	delete jim;
	return (0);
}

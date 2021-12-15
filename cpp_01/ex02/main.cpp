#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int		main() {
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringRef = str;

	cout << stringPTR << endl;
	cout << &stringRef << endl;

	cout << *stringPTR << endl;
	cout << stringRef << endl;

	return (0);
}
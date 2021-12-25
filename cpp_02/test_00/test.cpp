#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class MyClass
{
private:
	/* data */
public:
	int data;

	MyClass(int data) {
		this->data = data;
		cout << "Contsructor start\t" << this << endl;
	};
	~MyClass() {
		cout << "Contsructor end\t\t" << this << endl;
	}
};

void	Foo(MyClass value) {
	cout << "Foo start\n";
}

MyClass	Foo2() {
	cout << "Foo2 start\n";
	MyClass temp(2);
	return (temp);
}

int	main() {
	MyClass a(1);
	Foo(a);
	Foo2();
	return (0);
}

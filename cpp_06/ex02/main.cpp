#include <iostream>

// default colors
#define DEFAULT	"\033[0m"
#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"

// default bright colors
#define BR_DEFAULT	"\033[0m"
#define BR_BLACK	"\033[90m"
#define BR_RED		"\033[91m"
#define BR_GREEN	"\033[92m"
#define BR_YELLOW	"\033[93m"
#define BR_BLUE		"\033[94m"
#define BR_MAGENTA	"\033[95m"
#define BR_CYAN		"\033[96m"
#define BR_WHITE	"\033[97m"

// background colors
#define BG_DEFAULT	"\033[0m"
#define BG_BLACK	"\033[40m"
#define BG_RED		"\033[41m"
#define BG_GREEN	"\033[42m"
#define BG_YELLOW	"\033[43m"
#define BG_BLUE		"\033[44m"
#define BG_MAGENTA	"\033[45m"
#define BG_CYAN		"\033[46m"
#define BG_WHITE	"\033[47m"

// background bright colors
#define BG_BR_DEFAULT	"\033[0m"
#define BG_BR_BLACK		"\033[100m"
#define BG_BR_RED		"\033[101m"
#define BG_BR_GREEN		"\033[102m"
#define BG_BR_YELLOW	"\033[103m"
#define BG_BR_BLUE		"\033[104m"
#define BG_BR_MAGENTA	"\033[105m"
#define BG_BR_CYAN		"\033[106m"
#define BG_BR_WHITE		"\033[107m"

using std::cout;
using std::endl;
using std::string;

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void) {
	srand(time(0));
	int i = rand() % 3;
	if (i  == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		cout << "A" << endl;
	else if (dynamic_cast<B*>(p))
		cout << "B" << endl;
	else if (dynamic_cast<C*>(p))
		cout << "C" << endl;
	else
		cout << "What happened?" << endl;
}

void	identify(Base &p) {
	if ((char *)&p == NULL)
		return;
	try {
		(void)dynamic_cast<A&>(p);
		cout << "A" << endl;
	} catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<B&>(p);
		cout << "B" << endl;
	} catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<C&>(p);
		cout << "C" << endl;
	} catch (std::bad_cast) {}
}

int	main() {
	Base * a;

    std::cout << "pointer *p:" << std::endl;

    a = generate();
    identify(a);
    delete a;

    std::cout << "reference &p:" << std::endl;

    Base &b = *(generate());
    identify(b);
    delete &b;

	return (0);
}
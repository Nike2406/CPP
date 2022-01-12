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

struct	Data {
	int		i;
	float	f;
	char	c;
};

uintptr_t	serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int	main() {
	Data		*a = new Data();
	Data		*b;
	uintptr_t	raw;

	a->c = 'c';
	a->f = 3.33f;
	a->i = 42;
	raw = serialize(a);

	cout << "Adress a: " << a << endl;
	cout << "A: i = " << a->i << " f = " << a->f << " c = " << a->c << endl;
	cout << "raw = " << raw << endl;
	cout << "adress raw " << &raw  << endl;
    b = deserialize(raw);
    cout << "Adress b: " << b << endl;
	cout << "B: i = " << b->i << " f = " << b->f << " c = " << b->c << endl;

    delete a;

	return (0);
}
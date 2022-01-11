#include "Scalar_conversion.hpp"

int	main(int argc, char **argv) {
	if (argc != 2)
		cout << BR_RED << "Just two arguments allowed!" << DEFAULT << endl;
	else {
		cout << "____________________________\n\n";
		Scalar_conversion	a(argv[1]);
		Scalar_conversion	b(a);
		cout << "____________________________\n";
	}

	return (0);
}
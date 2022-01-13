#include "iter.hpp"

int		main() {
	int	int1[] = {4, 5, 8, 10};
	int	int2[] = {4, 5, 8, 10};
	cout << "arr1: ";
	::print_array(int1, 4);
	cout << "arr2: ";
	::print_array(int2, 4);
	cout << "iter\n";
	::iter(int1, 4, ::increment);
	::iter(int2, 4, ::decrement);
	cout << "arr1: ";
	::print_array(int1, 4);
	cout << "arr2: ";
	::print_array(int2, 4);
}
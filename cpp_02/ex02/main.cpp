#include "Fixed.hpp"


int main( void ) {
// Fixed a(6);
// Fixed b(9);
// Fixed c;
// c = a / b;
// c++;
// cout << c <<endl;


	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
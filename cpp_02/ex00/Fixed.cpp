#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point = 0;
	cout << "Default constructor called\n";
}

int		Fixed::getRawBits( void ) const {
	cout << "getRawBits() fundtion caled\n";
	return _fixed_point;
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixed_point = raw;
	cout << "setRawBits() fundtion caled\n";
}

Fixed::Fixed(Fixed const & tmp) {
	this->_fixed_point = tmp._fixed_point;
	cout << "Copy called\n";
}


Fixed const& Fixed::operator=(Fixed const& fl)
{
	this->_fixed_point = fl._fixed_point;
	cout << "Assignatoin operatior called\n";
	return *this;
}


Fixed::~Fixed()
{
	cout << "Destructor called\n";
}

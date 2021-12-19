#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point = 0;
}

int		Fixed::getRawBits( void ) const {
	return _fixed_point;
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixed_point = raw;
}

Fixed::Fixed(Fixed const & tmp) {
	this->_fixed_point = tmp._fixed_point;
}

Fixed::Fixed(int const & tmp) {
	this->_fixed_point = tmp << _bits;
}

Fixed::Fixed(float const & tmp) {
	this->_fixed_point = roundf(tmp * (pow(2, _bits)));
}

int Fixed::toInt( void ) const {
	return _fixed_point >> _bits;
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(_fixed_point) / pow(2, _bits);
}

Fixed const& Fixed::operator=(Fixed const& fl)
{
	this->_fixed_point = fl._fixed_point;
	return *this;
}


Fixed::~Fixed()
{
}

ostream& operator<<(ostream& os, Fixed const & to) {
	os << to.toFloat();
	return os;
}

Fixed const Fixed::operator+(Fixed const& fl) const {
	Fixed tmp;
	tmp._fixed_point = this->_fixed_point + fl._fixed_point;
	return tmp;
}

Fixed const Fixed::operator-(Fixed const& fl) const {
	Fixed tmp;
	tmp._fixed_point = this->_fixed_point - fl._fixed_point;
	return tmp;
}

Fixed const Fixed::operator*(Fixed const& fl) const {
	Fixed tmp;
	tmp._fixed_point = (this->_fixed_point * fl._fixed_point) / pow(2, _bits);
	return tmp;
}

Fixed const Fixed::operator/(Fixed const& fl) const {
	Fixed tmp;
	tmp._fixed_point = this->_fixed_point * pow(2, _bits) / fl._fixed_point;
	return tmp;
}

bool Fixed::operator<(Fixed const& fl) const {
	return _fixed_point < fl._fixed_point;
}

bool Fixed::operator<=(Fixed const& fl) const {
	return _fixed_point <= fl._fixed_point;
}

bool Fixed::operator>(Fixed const& fl) const {
	return _fixed_point > fl._fixed_point;
}

bool Fixed::operator>=(Fixed const& fl) const {
	return _fixed_point >= fl._fixed_point;
}

bool Fixed::operator==(Fixed const& fl) const {
	return _fixed_point == fl._fixed_point;
}

bool Fixed::operator!=(Fixed const& fl) const {
	return _fixed_point != fl._fixed_point;
}

Fixed const Fixed::operator++(void) {
	++_fixed_point;
	return *this;
}

Fixed const Fixed::operator++(int) {
	Fixed tmp;
	tmp._fixed_point = _fixed_point;
	_fixed_point++;
	return *this;
}

Fixed const Fixed::operator--(void) {
	--_fixed_point;
	return *this;
}

Fixed const Fixed::operator--(int) {
	Fixed tmp;
	tmp._fixed_point = _fixed_point;
	_fixed_point--;
	return *this;
}

Fixed Fixed::min(Fixed a, Fixed b) {
	if (a < b)
		return a;
	return b;
}

Fixed Fixed::max(Fixed a, Fixed b) {
	if (a > b)
		return a;
	return b;
}

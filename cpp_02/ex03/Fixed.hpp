#pragma once
#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Fixed
{
private:
	int					_fixed_point;
	static const int	_bits = 8;
public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed(void);
	Fixed(Fixed const &);
	Fixed(int const & tmp);
	Fixed(float const & tmp);
	int toInt( void ) const;
	float toFloat( void ) const;

	Fixed const& operator=(Fixed const& fl);
	Fixed const operator+(Fixed const& fl) const;
	Fixed const operator-(Fixed const& fl) const;
	Fixed const operator*(Fixed const& fl) const;
	Fixed const operator/(Fixed const& fl) const;

	bool operator<(Fixed const& fl) const;
	bool operator<=(Fixed const& fl) const;
	bool operator>(Fixed const& fl) const;
	bool operator>=(Fixed const& fl) const;
	bool operator==(Fixed const& fl) const;
	bool operator!=(Fixed const& fl) const;

	Fixed const operator++(void);
	Fixed const operator++(int);
	Fixed const operator--(void);
	Fixed const operator--(int);

	Fixed static min(Fixed a, Fixed b);
	Fixed static max(Fixed a, Fixed b);

	~Fixed();
};

ostream& operator<<(ostream& os, Fixed const & to);

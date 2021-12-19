#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

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
	Fixed const& operator=(Fixed const& fl);
	Fixed const& operator+(float const& fl);
	bool const& operator>=(float const& fl);
	bool const& operator<=(float const& fl);
	bool const& operator==(float const& fl);
	bool const& operator!=(float const& fl);
	bool const& operator<(float const& fl);
	bool const& operator>(float const& fl);

	~Fixed();
};
#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point(void);
	Point(Point const & tmp);
	Point(float const x, float const y);

	Fixed getX(void) const;
	Fixed getY(void) const;

	Point const& operator=(Point const& fl);
	Point operator+(Point const& fl);
	Point operator-(Point const& fl);
	Point operator*(Point const& fl);
	Point operator/(Point const& fl);
	Point(Fixed const x, Fixed const y);
	~Point(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

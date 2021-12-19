#include "Point.hpp"

Point::Point(void)
: _x(0), _y(0) {
}

Point::Point(Point const & tmp) : _x(tmp._x), _y(tmp._y){}

Point::Point(float const x, float const y) : _x(x), _y(y){}
Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y){}

Fixed Point::getX(void) const {
	return _x;
}

Fixed Point::getY(void) const {
	return _y;
}

Point Point::operator+(Point const& fl)
{
	Point pnt(this->_x + fl._x, this->_y + fl._y);
	return pnt;
}

Point Point::operator-(Point const& fl)
{
	Point pnt(this->_x - fl._x, this->_y - fl._y);
	return pnt;
}

Point Point::operator*(Point const& fl) {
	Point pnt(this->_x * fl._x, this->_y * fl._y);
	return pnt;
}

Point Point::operator/(Point const& fl) {
	Point pnt(this->_x / fl._x, this->_y / fl._y);
	return pnt;
}

Point::~Point(void) {}

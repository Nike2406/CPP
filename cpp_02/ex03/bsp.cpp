#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed aX = a.getX();
	Fixed aY = a.getY();
	Fixed bX = b.getX();
	Fixed bY = b.getY();
	Fixed cX = c.getX();
	Fixed cY = c.getY();
	Fixed pointX = point.getX();
	Fixed pointY = point.getY();

	Fixed	sign1, sign2, sign3;
	sign1 = Fixed((aX - pointX) * (bY - aY) - (bX - aX) * (aY - pointY));
	sign2 = Fixed((bX - pointX) * (cY - bY) - (cX - bX) * (bY - pointY));
	sign3 = Fixed((cX - pointX) * (aY - cY) - (aX - cX) * (cY - pointY));

	if (sign1 > 0 && sign2 > 0 && sign3 > 0)
		return (true);
	else if (sign1 < 0 && sign2 < 0 && sign3 < 0)
		return (true);
	return (false);
}
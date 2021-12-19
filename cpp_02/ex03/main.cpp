#include "Point.hpp"

int main( void ) {
	Point	a(4.6f, -1.02f);
	Point	b(6.3f, 4.38f);
	Point	c(12.14f, 2.58f);
	Point	currentPoint(10.85f, 1.96f);
	bool	res;

	res = bsp(a, b, c, currentPoint);
	cout << res << endl;
	return 0;
}
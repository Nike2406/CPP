#include "Span.hpp"

int		main() {
	Span	a(4);
	Span	b(a);
	cout << b.getSize() << endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	cout << "Shortest: " << sp.shortestSpan() << endl;
	cout << "Longest: " << sp.longestSpan() << endl;

	return (0);
}
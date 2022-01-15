#include "Span.hpp"

// Canonical
Span::Span(unsigned int size) : _size(size) {}

Span::Span(Span const & copy) {
	*this = copy;
}

Span const& Span::operator=(Span const& copy) {
	this->_size = copy._size;
	return *this;
}

Span::~Span() {}

// Getter
unsigned int	Span::getSize() {
	return (this->_size);
}

// Methods
void	Span::addNumber(int num) {

	if (_size <= _arr.size() || num < 0)
		throw Span::SpanException("No more!");
	_arr.push_back(num);
}

unsigned int	Span::shortestSpan() {
	if (_arr.size() < 1)
		throw SpanException("Array size is to small!");
	std::sort(_arr.begin(), _arr.end());
	int	shortest = std::numeric_limits<int>::max();
	vector<int>::iterator	prev;
	vector<int>::iterator	cur = _arr.begin();
	while (1) {
		prev = cur;
		cur++;
		if (cur == _arr.end())
			break;
		if ((*cur - *prev) < shortest)
			shortest = *cur - *prev;
	}
	return (shortest);
}

unsigned int	Span::longestSpan() {
	if (_arr.size() < 1)
		throw SpanException("Array size is to small!");
	vector<int>::iterator	min;
	vector<int>::iterator	max;
	min = std::min_element(_arr.begin(), _arr.end());
	max = std::max_element(_arr.begin(), _arr.end());
	return (*max - *min);
}

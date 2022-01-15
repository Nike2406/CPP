#include "Span.hpp"

// Canonical
Span::Span(unsigned int n) : _N(n) {}

Span::Span(Span const & copy) {
	this->_N = copy._N;
	*this = copy;
}

Span const& Span::operator=(Span const& tmp) {
	this->_name = tmp._name;
	this->_grade = tmp._grade;
	return *this;
}

Span::~Span() {}

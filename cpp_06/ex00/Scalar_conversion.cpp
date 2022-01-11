#include "Scalar_conversion.hpp"

// Canonical

Scalar_conversion::Scalar_conversion(char *str) : _str(str) {
	// cout << BG_GREEN << " Scalar_conversion constructor called " << DEFAULT << endl;
	getCommon(str);
}

Scalar_conversion::Scalar_conversion(Scalar_conversion const & copy) {
	// cout << BG_YELLOW  << " Scalar_conversion copy called " << DEFAULT << endl;
	*this = copy;
}

Scalar_conversion const& Scalar_conversion::operator=(Scalar_conversion const& copy) {
	// cout << BG_MAGENTA << " Scalar_conversion [=] operator called " << DEFAULT << endl;
	this->_str = copy._str;
	return *this;
}

Scalar_conversion::~Scalar_conversion()
{
	// cout << BG_RED << " Scalar_conversion destructor called " << DEFAULT << endl;
}

// Methods

void	Scalar_conversion::getCommon(char *str) {
	getChar(str);
}

void	Scalar_conversion::getChar(char *str) {
	try {
		_conChar = static_cast<char>(std::stoi(str));
		if (!isprint(_conChar))
			cout << "char: " << BR_YELLOW << "Non displayable" << DEFAULT << endl;
		else
			cout << "char: " << BR_GREEN << _conChar << DEFAULT << endl;
	} catch (std::exception &ex) {
		cout << "char: " << BR_RED << "impossible" << DEFAULT << endl;
	}
}

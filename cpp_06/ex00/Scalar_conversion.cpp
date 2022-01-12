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
	// checkArgs(str);
	getChar(str);
	getInt(str);
	getFloat(str);
	getDouble(str);
}

// void	checkArgs(char *str) {
// 	if (!strcmp(nan))
// }

void	Scalar_conversion::getChar(char *str) {
	try {
		_convChar = static_cast<char>(std::stoi(str));
		if (!isprint(_convChar))
			cout << "char: \t" << BR_YELLOW << "Non displayable" << DEFAULT << endl;
		else
			cout << "char: \t" << BR_GREEN << _convChar << DEFAULT << endl;
	} catch (std::exception &ex) {
		cout << "char: \t" << BR_RED << "impossible" << DEFAULT << endl;
	}
}

void	Scalar_conversion::getInt(char *str) {
	try {
		_convInt = static_cast<int>(std::stoi(str));
		cout << "int: \t" << BR_GREEN << _convInt << DEFAULT << endl;
	} catch (std::exception &ex) {
		cout << "int: \t" << BR_RED << "impossible" << DEFAULT << endl;
	}
}

void	Scalar_conversion::getFloat(char *str) {
	try {
		_convFloat = static_cast<float>(strtod(str, 0));
		cout << "float: \t" << BR_GREEN;
		cout << std::fixed;
		cout.precision(1);
		cout << _convFloat << "f" << DEFAULT << endl;
	} catch (std::exception &ex) {
		cout << "float: \t" << BR_RED << "impossible" << DEFAULT << endl;
	}
}

void	Scalar_conversion::getDouble(char *str) {
	try {
		_convDouble = strtod(str, 0);
		cout << "double: " << BR_GREEN << _convDouble << DEFAULT << endl;
	} catch (std::exception &ex) {
		cout << "double: " << BR_RED << "impossible" << DEFAULT << endl;
	}
}

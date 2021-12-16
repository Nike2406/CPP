#include "Karen.hpp"

Karen::Karen(void){ }

Karen::~Karen() { }

void	Karen::debug(void) {
	cout << "[ DEBUG ]\nI love to get extra bacon \
		for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \
		I just love it!\n";
}

void	Karen::info(void) {
	cout << "[ INFO ]\nI cannot believe adding extra \
bacon cost more money. You don’t put enough! \
If you did I would not have to ask \
for it!\n";
}

void	Karen::warning(void) {
	cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\
I’ve been coming here for years and you just started working \
here last month.\n";
}

void	Karen::error(void) {
	cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain(string level) {
	int	i = -1;
	void	(Karen::*fptr[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	bool	input[] = {level == "debug", level == "info", level == "warning", level == "error"};
	while(!input[++i]);
	switch (i) {
		case 0:
			(this->*fptr[0])();
		case 1:
			(this->*fptr[1])();
		case 2:
			(this->*fptr[2])();
		case 3:
			(this->*fptr[3])();
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

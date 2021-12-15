#include "Karen.hpp"

Karen::Karen(void){ }

Karen::~Karen() { }

void	Karen::debug(void) {
	cout << "DEBUG: I love to get extra bacon \
		for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \
		I just love it!\n";
}

void	Karen::info(void) {
	cout << "INFO: I cannot believe adding extra \
bacon cost more money. You don’t put enough! \
If you did I would not have to ask \
for it!\n";
}

void	Karen::warning(void) {
	cout << "WARNING: I think I deserve to have some extra bacon for free.\
I’ve been coming here for years and you just started working \
here last month.\n";
}

void	Karen::error(void) {
	cout << "ERROR: This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain(string level) {
	int	i = -1;
	void	(Karen::*fptr[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	bool	input[] = {level == "debug", level == "info", level == "warning", level == "error"};
	while(!input[++i]);
	(this->*fptr[i])();
}

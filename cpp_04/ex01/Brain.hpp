#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

#define IDEAS 100

class Brain
{
protected:
	string	_ideas[IDEAS];
public:
	Brain();
	Brain(string str);
	Brain(Brain const &);
	Brain & operator=(Brain const &);
	virtual ~Brain();
};
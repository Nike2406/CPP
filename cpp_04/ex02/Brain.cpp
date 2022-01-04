#include "Brain.hpp"

Brain::Brain(void) {
	cout << "Brain constructor called\n";
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = "some idea $i";
}

Brain::Brain(string str) {
	cout << "Brain constructor called\n";
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = str;
}

Brain::Brain(Brain const & tmp) {
	*this = tmp;
	cout << "Brain copy called\n";
}

Brain & Brain::operator=(Brain const& assign) {
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = assign._ideas[i];
	cout << "Brain [=] operator called\n";
	return *this;
}

Brain::~Brain()
{
	cout << "Brain destructor called\n";
}
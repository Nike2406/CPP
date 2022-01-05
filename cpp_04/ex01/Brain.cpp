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
	cout << "Brain copy called\n";
	*this = tmp;
}

Brain & Brain::operator=(Brain const& assign) {
	cout << "Brain [=] operator called\n";
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = assign._ideas[i];
	return *this;
}

Brain::~Brain()
{
	cout << "Brain destructor called\n";
}
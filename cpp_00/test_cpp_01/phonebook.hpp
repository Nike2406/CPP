#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>


class Phonebook {

public:

	int publicFoo;

	Phonebook();
	~Phonebook(void);

	void	publicBar(void) const;

private:
	int		_privateFoo;
	void	_privateBar(void) const;
};

#endif

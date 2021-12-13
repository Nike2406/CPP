#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define SIZE 8


class Phonebook {
	private:
		Contact _contacts[SIZE];

	public:
		Phonebook(void);
		~Phonebook(void);

		void	enterCommandsMessage(void);
		void	greetings(void);
		int		addContact(int id);
		void	searchContact(void);
		void	printHim(int id);
};

#endif

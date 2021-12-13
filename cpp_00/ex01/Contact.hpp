#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "Phonebook.hpp"

# define CONT_LENGTH 10

class Contact {
	public:
		Contact(void);
		~Contact(void);

		void	createContact(void);
		bool	isEmptyField(void);
		void	printContact(int id);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif
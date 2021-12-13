#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void	Contact::createContact(void) {
	std::cout << "First name: ";
	std::getline(std::cin, this->_firstName);
	if (std::cin.eof())
		std::cout << "First name is empty\n";
	std::cout << "Last name: ";
	std::getline(std::cin, this->_lastName);
	if (std::cin.eof())
		std::cout << "Last name is empty\n";
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
	if (std::cin.eof())
		std::cout << "Nickname is empty\n";
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phoneNumber);
	if (std::cin.eof())
		std::cout << "Phone number is empty\n";
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);
	if (std::cin.eof())
		std::cout << "Darkest secret is empty\n";
}

bool	Contact::isEmptyField(void) {
	if (this->_firstName.empty())
		return true;
	else if (this->_lastName.empty())
		return true;
	else if (this->_nickname.empty())
		return true;
	else if (this->_phoneNumber.empty())
		return true;
	else if (this->_darkestSecret.empty())
		return true;
	else
		return false;
}

void	Contact::printContact(int id) {
	std::cout << "|" << std::setw(CONT_LENGTH) << id + 1;
	if (this->_firstName.size() > CONT_LENGTH)
		std::cout << "|" << std::setw(CONT_LENGTH - 1) << \
			this->_firstName.substr(0, CONT_LENGTH - 1) << ".";
	else
		std::cout << "|" << std::setw(CONT_LENGTH) << this->_firstName;
	if (this->_lastName.size() > CONT_LENGTH)
		std::cout << "|" << std::setw(CONT_LENGTH - 1) << \
			this->_lastName.substr(0, CONT_LENGTH - 1) << ".";
	else
		std::cout << "|" << std::setw(CONT_LENGTH) << this->_lastName;
	if (this->_nickname.size() > CONT_LENGTH)
		std::cout << "|" << std::setw(CONT_LENGTH - 1) << \
			this->_nickname.substr(0, CONT_LENGTH - 1) << ".";
	else
		std::cout << "|" << std::setw(CONT_LENGTH) << this->_nickname;
	std::cout << "|" << std::endl;
}

void	Contact::printFullContact(void) {
	std::cout << "FirstName: " << this->_firstName << std::endl;
	std::cout << "LastName: "  << this->_lastName << std::endl;
	std::cout << "NickName: "  << this->_nickname << std::endl;
	std::cout << "PhoneNumber: " << this->_phoneNumber << std::endl;
	std::cout << "DarkestSecret: " << this->_darkestSecret << std::endl;
}




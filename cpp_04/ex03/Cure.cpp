#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure") {
	cout << "Cure " << GREEN << "constructor" << DEFAULT << " called\n";
}

Cure::Cure(Cure const & copy) : AMateria(copy._type) {
	cout << "Cure " << YELLOW << "copy" << DEFAULT << " called\n";
	*this = copy;
}

Cure const& Cure::operator=(Cure const& assign) {
	cout << "Cure " << YELLOW << "[=]" << DEFAULT << " operator called\n";
	this->_type = assign._type;
	return *this;
}

Cure::~Cure()
{
	cout << "Cure " << RED << "destructor" << DEFAULT << " called\n";
}

AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& ch) {
	cout << "* heals " << ch.getName() << " wounds *" << endl;
}

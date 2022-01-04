#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	cout << "Ice " << GREEN << "constructor" << DEFAULT << " called\n";
}

Ice::Ice(Ice const & copy) : AMateria(copy._type) {
	cout << "Ice " << YELLOW << "copy" << DEFAULT << " called\n";
	*this = copy;
}

Ice const& Ice::operator=(Ice const& assign) {
	cout << "Ice " << YELLOW << "[=]" << DEFAULT << " operator called\n";
	this->_type = assign._type;
	return *this;
}

Ice::~Ice()
{
	cout << "Ice " << RED << "destructor" << DEFAULT << " called\n";
}

AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& ot) {
	cout << " * shoots an ice bolt at " << ot.getName() << " *" << endl;
}


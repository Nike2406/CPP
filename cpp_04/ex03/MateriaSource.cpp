#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	cout << "MateriaSource " << GREEN << "constructor" << DEFAULT << " called\n";
	for (int i = 0; i < SOURCES; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy) {
	cout << "MateriaSource " << YELLOW << "copy" << DEFAULT << " called\n";
	*this = copy;
}

MateriaSource const& MateriaSource::operator=(MateriaSource const& assign) {
	cout << "MateriaSource " << YELLOW << "[=]" << DEFAULT << " operator called\n";
	for (int i = 0; i < SOURCES; i++) {
		this->_source[i] = assign._source[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	cout << "MateriaSource " << RED << "destructor" << DEFAULT << " called\n";
	for (int i = 0; i < SOURCES; i++)
		delete _source[i];
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < SOURCES; i++) {
		if (!_source[i]) {
			cout << "Learned " << GREEN << m->getType() << DEFAULT << endl;
			_source[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < SOURCES; i++) {
		if (type == _source[i]->getType()) {
			cout << GREEN << "Materia have been created!" << DEFAULT << endl;
			return _source[i]->clone();
		} else {
			cout << YELLOW << "Materia not found" << DEFAULT << endl;
			return NULL;
		}
	}
	return (NULL);
}

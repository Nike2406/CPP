#pragma once
#include "IMateriaSource.hpp"

# define SOURCES	4

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_source[SOURCES];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & copy);
	MateriaSource const& operator=(MateriaSource const& assign);
	~MateriaSource();

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};


#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const & tmp);
	Cure const& operator=(Cure const &);
	~Cure();

	AMateria	*clone() const;
	void		use(ICharacter&);
};

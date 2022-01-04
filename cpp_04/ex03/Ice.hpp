#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const & tmp);
	Ice const& operator=(Ice const &);
	~Ice();

	AMateria	*clone() const;
	void		use(ICharacter&);
};

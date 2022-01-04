#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

# define BAG_SIZE	4

class Character : public ICharacter
{
private:
	string		_name;
	AMateria	*_bag[BAG_SIZE];
	int			_num;
public:
	Character();
	Character(string const & name);
	Character(Character const & tmp);
	Character const& operator=(Character const &);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

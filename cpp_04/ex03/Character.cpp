#include "Character.hpp"

Character::Character(void) {
	cout << "Character " << GREEN << "constructor" << DEFAULT << " called\n";
	_name = "Mr.Freeman";
	_num = 0;

	for (int i = 0; i < BAG_SIZE; i++)
		_bag[i] = NULL;
}

Character::Character(string const & name) {
	cout << "Character " << GREEN << "constructor" << DEFAULT << " called\n";
	_name = name;
	_num = 0;

	for (int i = 0; i < BAG_SIZE; i++)
		_bag[i] = NULL;
}

Character::Character(Character const & copy) {
	cout << "Character " << YELLOW << "copy" << DEFAULT << " called\n";
	this->_name = copy._name;
	this->_num = copy._num;
	for (int i = 0; i < BAG_SIZE; i++) {
		if (this->_bag[i])
			delete this->_bag[i];
		this->_bag[i] = copy._bag[i];
	}
}

Character const& Character::operator=(Character const& assign) {
	cout << "Character " << YELLOW << "[=]" << DEFAULT << " operator called\n";
	this->_name = assign._name;
	this->_num = assign._num;
	for (int i = 0; i < BAG_SIZE; i++) {
		if (this->_bag[i])
			delete this->_bag[i];
		this->_bag[i] = assign._bag[i];
	}
	return *this;
}

Character::~Character()
{
	cout << "Character " << RED << "destructor" << DEFAULT << " called\n";
	for (int i = 0; i < BAG_SIZE; i++)
		if (_bag[i] != NULL)
			delete _bag[i];
}

string	const &Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	if (m == NULL) {
		cout << RED << "equip error!" << DEFAULT << endl;
		return ;
	} else {
		for (int i = 0; i < BAG_SIZE && _bag[i]; i++)
			if (_bag[i] == m)
				return ;
		_bag[_num++ % (BAG_SIZE - 1)] = m;
		cout << _name << CYAN << " takes " << DEFAULT << m->getType() << endl;
	}
	cout << "Nothing to take for " << _name << endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		cout << _name << " goes to wrong slot\n";
	else if (this->_bag[idx] == NULL)
		cout << _name << " goes to empty slot\n";
	else {
		cout << _name << " unequip " << _bag[idx]->getType() << endl;
		_bag[idx] = NULL;
		_num = idx;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if ((void *)&target == NULL) {
		cout << RED << "Target is NULL" << DEFAULT << std::endl;
		return ;
	}
	if (!_bag[idx] || idx < 0 || idx > 3)
		cout << RED << "This materia doesn't exists!" << DEFAULT << endl;
	else {
		this->_bag[idx]->use(target);
		delete this->_bag[idx];
		this->_bag[idx] = NULL;
	}
}


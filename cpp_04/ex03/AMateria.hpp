#ifndef CPP_AMATERIA_HPP
#define CPP_AMATERIA_HPP

#include <iostream>
#include <string>
#define DEFAULT   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"

using std::cout;
using std::endl;
using std::string;

class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria(std::string const & type);
	AMateria(const AMateria & copy);
	virtual ~AMateria();
	AMateria & operator= (const AMateria & other);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_AMATERIA_HPP

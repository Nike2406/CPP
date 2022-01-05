#ifndef CPP_AMATERIA_HPP
#define CPP_AMATERIA_HPP

#include <iostream>
#include <string>

#define DEFAULT	"\033[0m"
#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"

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

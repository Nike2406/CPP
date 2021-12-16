#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

class Karen
{
public:
	Karen(void);
	~Karen(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	complain(string level);
};

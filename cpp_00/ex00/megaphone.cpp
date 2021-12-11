#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; j < argc; j++)
			for (size_t i = 0; i < std::strlen(argv[j]); i++)
				std::cout << static_cast<char>(std::toupper(argv[j][i]));
			std::cout << " ";
		std::cout << std::endl;
	}
	return (0);
}

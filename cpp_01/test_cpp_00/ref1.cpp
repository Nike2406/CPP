#include <iostream>

int		main() {
	int	numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	*ballsPtr = 84;
	std::cout << numberOfBalls << std::endl;
	return (0);
}
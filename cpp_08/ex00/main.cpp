#include "easyfind.hpp"

int		main() {
	// Vector
	int	firstSize = 5;
	int	firstToFind = 3;

	vector<int> firstContainer;
	for (int i = 0; i < firstSize; ++i) {
		firstContainer.push_back(i);
	}
	vector<int>::iterator v_it;
	cout << BR_YELLOW << "vector: " << DEFAULT;
	for (v_it = firstContainer.begin(); v_it < firstContainer.end(); v_it++) {
		cout << *v_it << " ";
	}
	cout << endl;

	if (easyfind(firstContainer, firstToFind) != firstContainer.end())
		cout << *easyfind(firstContainer, firstToFind) << BR_GREEN << " found." << DEFAULT << endl;

	// List
	int	secondSize = 10;
	int	secondToFind = 4;

	list<int> secondContainer;
	for (int i = 0; i < secondSize; ++i) {
		secondContainer.push_back(i);
	}
	list<int>::iterator l_it;
	cout << BR_YELLOW << "list: " << DEFAULT;
	for (l_it = secondContainer.begin(); l_it != secondContainer.end(); l_it++) {
		cout << *l_it << " ";
	}
	cout << endl;

	if (easyfind(secondContainer, secondToFind) != secondContainer.end())
		cout << *easyfind(secondContainer, secondToFind) << BR_GREEN << " found." << DEFAULT << endl;


	return (0);
}
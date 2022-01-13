#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void	iter(T *arr, int size, void (*f)(T &t)) {
	for (int i = 0; i < size; ++i)
		f(arr[i]);
}

template <typename T>
void	increment(T &i) {
	i = i + 1;
}

template <typename T>
void	decrement(T &i) {
	i = i - 1;
}

template <typename T>
void	print_array(T *arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <class T>
class Array
{
private:
	T				*_data;
	unsigned int	_arr_size;
public:
	Array() : _data() {}
	Array(unsigned int n) : _arr_size(n) {
		_data = new T[n];
		for (unsigned int i = 0; i < n ; ++i)
			_data[i] = 0;
	}

	~Array() {
		delete[] this->_data;
	}

	Array(const Array<T> & copy) {
		this->_arr_size = copy._arr_size;
		this->_data = new T[this->_arr_size];
		for (unsigned int i = 0; i < this->_arr_size ; ++i)
			this->_data[i] = copy._data[i];
	}

	Array	&operator=(const Array& copy) {
		this->_arr_size = copy._arr_size;
		this->_data = new T[this->_arr_size];
		for (unsigned int i = 0; i < this->_arr_size ; ++i)
			this->_data[i] = copy._data[i];
		reutrn (*this);
	}

	T&	operator[](unsigned int index) {
		if(index < 0 || index >= this->_arr_size)
			throw std::out_of_range("Index is out of range");
		return (_data[index]);
	}
};

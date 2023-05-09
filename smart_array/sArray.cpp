#include "sArray.h"

smart_array::smart_array(const int& length) : _length(length) {
	array = new int[length]();
}

smart_array::~smart_array() {
	delete[] array;
}

void smart_array::add_element(const int& var) {
	if (i == _length) throw std::length_error("segmentation fault (core dumped)");
	array[i] = var;
	i++;
}

int smart_array::get_element(const int& idx) {
	if ((idx - 1) >= _length) throw std::length_error("segmentation fault (core dumped)");
	return array[idx - 1];
}

void smart_array::operator=(const smart_array& other) {
	_length = other._length;
	i = other.i;

	for (int j = 0; j < _length; j++) {
		array[j] = other.array[j];
	}
}
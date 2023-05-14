#include "sArray.h"

smart_array::smart_array(const int& length) : length_(length) {
	array = new int[length]();
}

smart_array::smart_array(const smart_array& other) {
	length_ = other.length_;
	i = other.i;

	array = new int[length_]();

	for (int j = 0; j < length_; ++j) {
		array[j] = other.array[j];
	}
}

smart_array::~smart_array() {
	delete[] array;
}

void smart_array::add_element(const int& var) {
	if (i == length_) throw std::length_error("segmentation fault (core dumped)");
	array[i] = var;
	i++;
}

int smart_array::get_element(const int& idx) {
	if ((idx - 1) >= length_) throw std::length_error("segmentation fault (core dumped)");
	return array[idx - 1];
}

smart_array& smart_array::operator=(const smart_array& other) {
	if (this == &other) {
		return *this;
	}
	else if (length_ < other.length_) {
		delete[] array;

		array = new int[other.length_]();
	}
	
	length_ = other.length_;
	i = other.i;

	for (int j = 0; j < length_; ++j) {
		array[j] = other.array[j];
	}

	return *this;
}
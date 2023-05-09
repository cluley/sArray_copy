#include "sArray.h"

int main(int argc, char** argv) {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

	smart_array new_arr(2);
	new_arr.add_element(44);
	new_arr.add_element(34);

	arr = new_arr;

	std::cout << arr.get_element(1) << std::endl;
	std::cout << new_arr.get_element(1) << std::endl;

	return 0;
}
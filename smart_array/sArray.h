#pragma once
#ifdef SMARTARRAYDYNAMIC_EXPORTS
#define SMARTARRAY_API __declspec(dllexport)
#else
#define SMARTARRAY_API __declspec(dllimport)
#endif

#include <iostream>

class SMARTARRAY_API smart_array {
public:
	smart_array(const int& length);
	smart_array(const smart_array&);
	~smart_array();
	void add_element(const int& var);
	int get_element(const int& idx);
	smart_array& operator=(const smart_array& other);
private:
	int* array = nullptr;
	int _length = 0;
	int i = 0;
};
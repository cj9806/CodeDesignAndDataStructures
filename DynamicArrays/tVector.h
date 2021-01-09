#pragma once

template <typename T>
class tVector {
	T *arr;									// pointer to underlying array
	size_t arrSize;							// stores the number of elements currently used
	size_t arrCap;							// stores the capacity of the underlying array

public:
	cVector();							   // initializes the vector's default values
	~tVector();							   // destroys the underlying array

	T *data();							   // returns a pointer to the underlying array

	void reserve(size_t newCapacity);	   // returns a pointer to the underlying array
										   // at least the given capacity	

	void push_back(const T& value);		   // adds an element to the end of the vector
	void pop_back();					   // destroys and removes the last element of the vector
										   // NOTE: This manually calls the destructor
										   // on the removed 



	T &at(size_t index);				   // returns the element at the given index

	size_t size() const;                   // returns current number of elements
	size_t capacity()const;				   // returns maximum number of elements we can store
};
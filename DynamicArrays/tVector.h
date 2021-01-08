#pragma once
template <typename T>
class Vector
{
	T* arr;                                  //pointer to array
	size_t arrSize;                          //store the number of elements currently used
	size_t arrCapacity;                      //stores capacity of underlying array

public:
	tVector();                               //init vector default values
	~tVector();                              //destroy underlying array


	T* data();                              //returns pointer to underlying array
	void reserve(size_t newCapacity);       //reallocates array to given capacity


	void push_back(const T& value);          //adds an element to end of vector
	void pop_back();                         //destroys and removes last element in the vector


	T& at(size_t index);                     //returns element at the given index

	size_t size() const;                     //returns current number of elements
	size_t capacity() const
	{
		return new
	}//returns max number of elements in array
};


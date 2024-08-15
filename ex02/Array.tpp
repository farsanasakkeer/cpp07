#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
template <typename T>
Array<T> :: Array() : array(new T[0]), length(0)
{
    std::cout << "Empty Array created " <<  std::endl;
}

template <typename T>
Array<T> :: Array(unsigned int n) : array(new T[n]), length(n)
{
    std::cout << "Array created with size " << length <<  std::endl;
}

template <typename T>
Array<T>::Array(const Array &other) : array(new T[other.size()]), length(other.size())
{
	for (unsigned int i = 0; i < length; ++i)
		array[i] = other.array[i];
	std::cout << "Array Copied with size: " << length << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array Destroyed" << std::endl;
	delete[] array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] array;
		array = new T[other.size()];
		length = other.size();
		for (unsigned int i = 0; i < length; ++i)
			array[i] = other.array[i];
	}
	std::cout << "Array Assigned with size: " << length << std::endl;
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= length )
		throw std::out_of_range("Index out of bounds");
	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (length);
}

#endif
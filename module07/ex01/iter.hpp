#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &element))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void print_array(T const &elem)
{
	std::cout << elem;
	std::cout << " ";
}


#endif

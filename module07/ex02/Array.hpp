#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <exception>
#include <cassert>
#include <iostream>

template <class T>
class Array
{
private:
	unsigned int length;
	T *array_ptr;
public:
	Array();
	Array( unsigned int n );
	~Array();
	Array( const Array<T> &bure );
	Array& operator= ( const Array<T> &bure );

	class ArrayException:public std::exception{
		virtual const char* what() const throw();
	};

	T& operator[](int index);
	unsigned int size();
};

#include "Array.inl"

#endif

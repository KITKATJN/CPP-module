#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <cstddef>

template <class T>
class Array
{
private:
	size_t length;
	T * array_ptr;
public:
	Array();
	Array( unsigned int n );
	~Array();
	Array( const Array<T> &bure );
	Array& operator= ( const Array<T> &bure );

	class ArrayException:public std::exception{
		virtual const char* what() const throw();
	};

	size_t size();
};

template <typename T>
Array<T>::Array(/* args */):array_ptr(nullptr), length(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n):length(0)
{
	array_ptr = new T[n];
}

template <typename T>
Array<T>::~Array()
{

}

template <typename T>
size_t Array<T>::size(/* args */)
{
	return length;
}

#endif

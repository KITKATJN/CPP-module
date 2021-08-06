#include "Array.hpp"


template <typename T>
Array<T>::Array(/* args */):array_ptr(nullptr), length(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n):length(n)
{
	array_ptr = new T[n];
}

template <typename T>
Array<T>::~Array()
{
	delete[] array_ptr;
}

template <typename T>
unsigned int Array<T>::size(/* args */)
{
	return length;
}

template<typename T>
const char* Array<T>::ArrayException::what() const throw()
{
	return "ArrayException: index to high";
}

template<typename T>
Array<T> & Array<T>::operator= ( const Array<T> &bure ){
	if (this->length > 0){
		delete[] this->array_ptr;
		array_ptr = nullptr;
	}
	this->length = 0;
	if (bure.length > 0){
		this->array_ptr = new T[bure.length];
		while (this->length < bure.length){
			this->array_ptr[this->length] = bure.array_ptr[this->length];
			this->length++;
		}
	}
	return *this;
}

template<typename T>
Array<T>::Array( const Array<T> &bure ):length(0){
	if (bure.length > 0){
		this->array_ptr = new T[bure.length];
		while (this->length < bure.length){
			this->array_ptr[this->length] = bure.array_ptr[this->length];
			this->length++;
		}
	}
}

template <typename T>
T& Array<T>::operator[](int index){
	if (static_cast<unsigned int>(index) >= length)
		throw ArrayException();
	return array_ptr[index];
}

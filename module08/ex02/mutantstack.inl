#include "mutantstack.hpp"

template <typename T>
typename MutantStack<T>::const_reverse_iterator crend(){
	return std::stack<T>::c.crend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator crbegin(){
	return std::stack<T>::c.crbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator rend(){
	return std::stack<T>::c.rend();
}

template <typename T>
typename MutantStack<T>::reverse_iterator rbegin(){
	return std::stack<T>::c.rbegin();
}


template <typename T>
typename MutantStack<T>::const_iterator cend(){
	return std::stack<T>::c.cend();
}

template <typename T>
typename MutantStack<T>::const_iterator cbegin(){
	return std::stack<T>::c.cbegin();
}

template <typename T>
typename MutantStack<T>::iterator end(){
	return std::stack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::iterator begin(){
	return std::stack<T>::c.begin();
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &mutant){
	if (*this == &mutant)
		return *this;
	this->std::stack<T>::c = mutant.std::stack<T>::c;
	return *this;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &mutant):std::stack<T>(mutant){
}

template <typename T>
MutantStack<T>::MutantStack(/* args */):std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

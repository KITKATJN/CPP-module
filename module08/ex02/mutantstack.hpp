#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <stack>
#include <list>
#include <algorithm>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
	MutantStack(/* args */);
	MutantStack(MutantStack<T> const &mutant);
	~MutantStack();
	MutantStack<T> &operator=(MutantStack<T> const &mutant);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){
	return std::stack<T>::c.begin();
	}
	iterator end(){
	return std::stack<T>::c.end();
	}
	const_iterator cbegin();
	const_iterator cend();
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator crbegin();
	const_reverse_iterator crend();
};

#include "mutantstack.inl"

#endif

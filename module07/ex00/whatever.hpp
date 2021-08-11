#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T swap_value = a;
	a = b;
	b = swap_value;
}

template <typename T>
T max(T &a, T &b)
{
	return (a > b) ? a : b;
}

template <typename T>
T min(T &a, T &b)
{
	return (a < b) ? a : b;
}

class Awesome{
	private:
	int _n;
	public:
	Awesome(int n):_n(n){};
	bool operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
	bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
	bool operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
	bool operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
	bool operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
	bool operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
	int getN(){return _n;}
};
#endif

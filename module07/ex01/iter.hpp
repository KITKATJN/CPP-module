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

class Awesome
{
public:
	Awesome (void):_n(42){return;}
	int get(void) const {return this->_n;}
private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, Awesome const &rhs) {o << rhs.get(); return o;}
template <typename T>
void print(T const & x) {std::cout << x << std::endl; return;}

#endif

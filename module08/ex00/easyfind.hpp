#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

template < typename T >
typename T::iterator easyfind(T &t, int t_int){
	return(std::find(t.begin(), t.end(), t_int));
}

#endif

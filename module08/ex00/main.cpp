#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	std::list<int> list;

	vec.push_back(1252);
	vec.push_back(323);
	vec.push_back(899);
	vec.push_back(6);
	vec.push_back(-63);
	vec.push_back(40);

	list.push_back(2);
	list.push_back(454);
	list.push_back(17);
	list.push_back(4574);
	list.push_back(3);

	std::vector<int>::iterator vec_iter = easyfind(vec, 323);
	if (vec_iter != vec.end()){
		std::cout << "Element is " << *vec_iter << " : found at pos " << vec_iter - vec.begin()  << std::endl;
	}
	else{
		std::cout << "Element not found" << std::endl;
	}

	std::vector<int>::iterator vec_iter2 = easyfind(vec, 485);
	if (vec_iter2 != vec.end()){
		std::cout << "Element is " << *vec_iter2 << " : found at pos " << vec_iter2 - vec.begin()  << std::endl;
	}
	else{
		std::cout << "Element not found" << std::endl;
	}

	std::list<int>::iterator list_iter = easyfind(list, 17);
	if (list_iter != list.end()){
		int pos = 0;
		for (std::list<int>::iterator iter = list.begin(); iter != list_iter; iter++){
			pos++;
		}
		std::cout << "Element is " << *list_iter << " : found at pos " << pos << std::endl;
	}
	else{
		std::cout << "Element not found" << std::endl;
	}

	std::list<int>::iterator list_iter2 = easyfind(list, 266);
	if (list_iter2 != list.end()){
		int pos = 0;
		for (std::list<int>::iterator iter = list.begin(); iter != list_iter2; iter++){
			pos++;
		}
		std::cout << "Element is " << *list_iter << " : found at pos " << pos << std::endl;
	}
	else{
		std::cout << "Element not found" << std::endl;
	}
	return 0;
}

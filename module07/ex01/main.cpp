#include "iter.hpp"

int main()
{
	int int_array[] = {1, 4, 5, 54, 65, 0};
	iter(int_array, 6, &print_array);
	std::cout << std::endl;

	std::string string_array[] = {"Hello", "Jim", "10", "night", "apple"};
	iter(string_array, string_array->length(), &print_array);
	std::cout << std::endl;

	bool bool_array[] = {true, true, false};
	iter(bool_array, 3, &print_array);
	std::cout << std::endl;

	return 0;
}

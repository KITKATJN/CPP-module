#include <cstdint>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data data;

	data.big_int = 10;
	data.big_str = "Big str";

	uintptr_t t = serialize(&data);
	Data *un_data = deserialize(t);
	std::cout << un_data->big_str << std::endl;
	std::cout << un_data->big_int << std::endl;
	return 0;
}

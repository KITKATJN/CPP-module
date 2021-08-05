#include <string>
#include <iomanip>
#include <ctype.h>
#include <iostream>
#include <exception>

int main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;
	std::string str = argv[1];
	try
	{
		int _char = std::stoi(str);
		float _charf = std::stof(str);
		if (isascii(_char) && _char == _charf)
		{
			if (isprint(_char))
				std::cout << "char: \'" << (char)_char << "\'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
	}
	try
	{
		int int_str = std::stoi(str);
		std::cout << "int: " << int_str << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int: impossible" << '\n';
	}
	try
	{
		float float_str = std::stof(str);
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "float: " << float_str << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float: impossible" << '\n';
	}
	try
	{
		double double_str = std::stod(str);
		std::cout << "double: " << double_str << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double: impossible" << '\n';
	}
	return 0;
}

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Alex("Alex", 100);
		std::cout << Alex << std::endl;
		Form p322("p322", 100, 50);
		std::cout << p322 << std::endl;
		Alex.signForm(p322);
		std::cout << p322 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Alex("Alex", 100);
		std::cout << Alex << std::endl;
		Form passport("Passport", 100, 101);
		std::cout << passport << std::endl;
		Alex.signForm(passport);
		std::cout << passport << std::endl;
		Alex.signForm(passport);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Alex("Alex", 100);
		std::cout << Alex << std::endl;
		Form passport("Passport", 99, 90);
		std::cout << passport << std::endl;
		Alex.signForm(passport);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

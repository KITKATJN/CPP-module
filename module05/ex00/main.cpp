#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat alex("Alex", 90);
		alex.decrement();
		std::cout << alex << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat alex("Alex", 0);
		alex.increment();
		std::cout << alex << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat alex("Alex", 1);
		alex.increment();
		std::cout << alex << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

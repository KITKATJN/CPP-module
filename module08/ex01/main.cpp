#include "span.hpp"
#include <time.h>

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		Span spp = Span(0);
		spp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span spp = Span(1);
		spp.addNumber(78);
		spp.addNumber(78);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	srand(time(0));
	try
	{
		Span spp = Span(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			spp.addNumber(rand());
		}
		std::cout << spp.shortestSpan() << std::endl;
		std::cout << spp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span sp(5);
		std::vector<int> _vector = {4, -7, 9, 45, 6};
		sp.addNumber(_vector.begin(), _vector.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << std::endl;
		try
	{
		Span sp(5);
		std::vector<int> _vector = {-4, -7, -9, -45, -6};
		sp.addNumber(_vector.begin(), _vector.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	return 0;


}

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
private:
	unsigned int max_size;
	std::vector<int> vec;
	Span(/* args */);
public:
	Span(unsigned const int N);
	Span ( Span const &character );
	Span &operator= ( Span const &character );
	~Span();



	class SizeOfVectorException:public std::exception{
		virtual const char* what() const throw();
	};

	class FindSpanException:public std::exception{
		virtual const char* what() const throw();
	};

	class LargeVectorException:public std::exception{
		virtual const char* what() const throw();
	};

	void addNumber(int num);
	template <typename T>
	void addNumber(T start, T end);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
};

#include "span.inl"

#endif

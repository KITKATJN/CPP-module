#include "span.hpp"

template <typename T>
void Span::addNumber(T start, T end){
	if (max_size < std::distance(start, end))
		throw LargeVectorException();
	while (start != end){
		vec.push_back(*start);
		start++;
	}
}

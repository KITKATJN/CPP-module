#include "span.hpp"

unsigned int Span::shortestSpan() const{
	if (vec.empty() || vec.size() == 1)
		throw FindSpanException();
	unsigned int short_span = 4294967295;
	for (size_t i = 0; i < vec.size(); i++)
	{
		for (size_t j = i + 1; j < vec.size(); j++)
			{
				if (static_cast<unsigned int>(std::abs(vec[i] - vec[j])) < short_span)
					short_span = std::abs(vec[i] - vec[j]);
			}
	}
	return short_span;
}

unsigned int Span::longestSpan() const{
	if (vec.empty() || vec.size() == 1)
		throw FindSpanException();
	return std::abs(*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
}

const char* Span::FindSpanException::what() const throw(){
	return "ExceptionFindSpan: can't find span";
};

const char* Span::SizeOfVectorException::what() const throw(){
	return "ExceptionAddNumber: vec is full already";
};

const char* Span::LargeVectorException::what() const throw(){
	return "ExceptionLargeVector: vector is large";
};

void Span::addNumber(int num){
	if (vec.size() >= max_size)
		throw SizeOfVectorException();
	vec.push_back(num);
}

Span::Span(unsigned const int N):max_size(N)
{
}

Span::~Span()
{
}

Span &Span::operator= ( Span const &character ){
	if (this == &character)
		return *this;
	this->vec = character.vec;
	this->max_size = character.max_size;
	return *this;
}

Span::Span ( Span const &c ):max_size(c.max_size), vec(c.vec){
}

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &rhs)
{
	// TODO: insert return statement here
}

void Span::addNumber(int n)
{
	if (_list.size() > _N)
		throw std::out_of_range("AddNumber: List is full");
	_list.push_back(n);
}

int Span::shortestSpan()
{
	return 0;
}

int Span::longestSpan()
{
	return 0;
}

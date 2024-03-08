#include "Span.hpp"
#include <iterator>
#include <algorithm>

Span::Span(void)
{}

Span::Span(const Span&)
{}

Span::Span(int pN)
{
	_numbers = std::vector<int>(pN);
	_N = pN;
}

Span::~Span(void)
{}

Span&   Span::operator=(const Span& param)
{
	if (this != &param)
	{
		_N = param._N;
		_numbers = param._numbers;
	}
	return (*this);
}

void    Span::addNumber(int in)
{
	if (_numbers.size() == _N)
		throw (SpanAlreadyFullException());
	_numbers.push_back(in);
}

int Span::shortestSpan(void)
{
	if (_numbers.size() < 2)
		throw (LessThanTwoMembersException());
	std::sort(_numbers.begin(), _numbers.end());

	int span;
	int shortestSpan = _numbers[1] - _numbers[0];
	
	for (std::vector<int>::iterator it = _numbers.begin() + 2; 
			it != _numbers.end(); it++)
	{
		span = *it - *(it - 1);
		if (span < shortestSpan)
			shortestSpan = span;
	}
	return (shortestSpan);
}

int Span::longestSpan(void)
{
	if (_numbers.size() < 2)
		throw (LessThanTwoMembersException());
	std::sort(_numbers.begin(), _numbers.end());

	return (_numbers.back() - _numbers.front());
}

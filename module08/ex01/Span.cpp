#include "Span.hpp"
#include <iterator>
#include <algorithm>
#include <numeric>
#include <climits>
#include <cstdlib>
#include <ctime>

Span::Span(void)
{}

Span::Span(const Span&)
{}

Span::Span(int pN)
{
	_n = pN;
}

Span::~Span(void)
{}

Span&   Span::operator=(const Span& param)
{
	if (this != &param)
	{
		_n = param._n;
		_numbers = param._numbers;
	}
	return (*this);
}

void    Span::addNumber(int in)
{
	if (_n == 0)
		throw (SpanAlreadyFullException());
	_numbers.push_back(in);
	_n--;
}

void	Span::addNumbers(void)
{

    // Seed the random number generator
    std::srand(std::time(0));

    while (_n != 0)
    {
        int random_number = std::rand(); // Generate a random number
        _numbers.push_back(random_number); // Add the random number to the vector
        _n--;
    }	
}

int Span::shortestSpan(void)
{
    if (_numbers.size() < 2)
        throw (LessThanTwoMembersException());
    std::sort(_numbers.begin(), _numbers.end());
    std::vector<int> diffs(_numbers.size());
    std::adjacent_difference(_numbers.begin(), _numbers.end(), diffs.begin());
    return (std::abs(*std::min_element(diffs.begin() + 1, diffs.end())));
}

int Span::longestSpan(void)
{
	if (_numbers.size() < 2)
		throw (LessThanTwoMembersException());
	std::sort(_numbers.begin(), _numbers.end());

	return (std::abs(_numbers.back() - _numbers.front()));
}

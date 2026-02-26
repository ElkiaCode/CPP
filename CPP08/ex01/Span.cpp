#include "Span.hpp"

Span::Span(unsigned int N) : _maxlength(N)
{
}

Span::Span(const Span &other)
{
		this->_maxlength = other._maxlength;
		this->_data = other._data;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_data = other._data;
		this->_maxlength = other._maxlength;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_data.size() == _maxlength)
		throw FullException();
	_data.push_back(n);
}

int Span::shortestSpan() const
{
	if (_data.size() < 2)
		throw NoSpanException();
	std::vector<int> copy = _data;
	std::sort(copy.begin(), copy.end());
	int min_diff = copy[1] - copy[0];
	for (size_t i = 1; i < copy.size(); i++)
	{
		int diff = copy[i] - copy[i - 1];
		if (diff < min_diff)
			min_diff = diff;
	}
	return min_diff;
}

int Span::longestSpan() const
{
	if (_data.size() < 2)
		throw NoSpanException();
	std::vector<int>::const_iterator min_it = std::min_element(_data.begin(), _data.end());
	std::vector<int>::const_iterator max_it = std::max_element(_data.begin(), _data.end());
	return *max_it - *min_it;
}


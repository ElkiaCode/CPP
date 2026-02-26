#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class FullException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Span is full";
		}
};

class NoSpanException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Not enough elements to compute span";
		}
};

class Span
{
	private:
		unsigned int _maxlength;
		std::vector<int> _data;
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
	void addNumber(int n);
	int shortestSpan() const;
	int longestSpan() const;

	template <typename It>
	void addNumber(It begin, It end)
	{
		size_t size = std::distance(begin, end);
		if (_data.size() + size > _maxlength)
			throw FullException();
		_data.insert(_data.end(), begin, end);
	}
};

#endif
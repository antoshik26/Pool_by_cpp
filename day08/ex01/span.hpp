#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <map>
#include <vector>

class Span
{
	private:
		std::vector<int> t;
		unsigned int count;
		unsigned int i;
		class NoSpaseSpan : public std::exception
		{
			virtual const char* what() const throw();
		};
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &span);
		Span &operator=(const Span &span);
		void addNumber(int c);
		int shortestSpan();
		int longestSpan();
};

#endif
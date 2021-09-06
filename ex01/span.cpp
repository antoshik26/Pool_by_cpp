#include "span.hpp"

Span::Span()
{

}

Span::Span(unsigned int n)
{
	t.reserve(n);
	count = n;
	i = 0;
}

Span::~Span()
{

}

Span::Span(const Span &obj)
{
	t = obj.t;
}

Span &Span::operator=(const Span &span)
{
	t = span.t;
	return (*this);
}

void Span::addNumber(int c)
{
	if (i == t.size())
		throw Span::NoSpaseSpan();
	else
	{
		t.push_back(c);
		i++;
	}
}

int Span::shortestSpan()
{
	int min;
	int find;

	std::vector<int>::iterator i = t.begin();
	std::vector<int>::iterator j = t.end();
	min = *i;
	while (i != j)
	{
		if (*i < min)
		{
			min = *i;
		}
		i++;
	}
	i = t.begin();
	find = 2147483647;
	while (i != j)
	{
		if ((find > (*i - min)) && (min != *i))
		{
			find = *i - min;
		}
		i++;
	}
	return (find);
}

int Span::longestSpan()
{
	int min;
	int max;

	std::vector<int>::iterator i = t.begin();
	std::vector<int>::iterator j = t.end();
	min = *i;
	max = *i;
	while (i != j)
	{
		if (*i < min)
		{
			min = *i;
		}
		if (*i > max)
		{
			max = *i;
		}
		i++;
	}
	return (max - min);
}

const char* Span::NoSpaseSpan::what() const throw()
{
	return ("Vector full");
}
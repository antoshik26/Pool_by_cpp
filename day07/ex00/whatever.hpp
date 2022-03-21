#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename Type>
Type max(Type const &x, Type const &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

template <typename Type>
Type min(Type const &x, Type const &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template <typename Type>
void swap(Type &x, Type &y)
{
	Type t = x;
	x = y;
	y = t;
}

#endif
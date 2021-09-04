#ifndef ITER_HPP
#define ITER_HPP

template<typename Type>
void iter(Type *t1, int t2, void (*t3)(Type const &))
{
	int i;

	i = 0;
	while (i < t2)
	{
		t3(t1[i]);
		i++;
	}
}
#endif
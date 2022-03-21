#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
# include <iostream>
# include <map>
# include <stack>
# include <vector>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T>& src) { *this = src; }
		virtual ~MutantStack() {}

		MutantStack<T>& operator=(const MutantStack<T>& rhs) 
		{
			this->c = rhs.c;
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
    	iterator begin() const { return this->c.begin; }
    	iterator end() const { return this->c.end; }

};

#endif
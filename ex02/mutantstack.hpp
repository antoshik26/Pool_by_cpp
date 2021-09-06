#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::vector<int> t;
	public:
		class iterator
		{
			public:
				// iterator(int):current(curr);
				iterator &operator=(const iterator &other);
				iterator &operator++();
				iterator &operator--();
				int operator*();
				int* operator->();
				bool operator==(const iterator &other);
				bool operator!=(const iterator &other);
		}
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &stack);
		MutantStack &operator=(const MutantStack &stack);
		void push(int c);
		int pop();
		int top();
		int size();
		iterator begin();
		iterator end();
};

#endif
// #pragma once
// #ifndef __MutantStack__HPP__
// # define __MutantStack__HPP__
// # include <iostream>
// # include <list>
// # include <vector>
// # include <deque>
// # include <stack>
// # include <exception>
// # include <algorithm>

// template <typename T>
// class MutantStack : public std::stack<T> {
// 	public:
// 		MutantStack() : std::stack<T>() {}
// 		virtual ~MutantStack() {}

// 		MutantStack(const MutantStack & copy) {
// 			*this = copy;
// 		}
// 		MutantStack & operator=(const MutantStack & copy) {
// 			std::stack<T>::operator=(copy);
// 			return (*this);
// 		}

// 		typedef typename std::deque<T>::iterator iterator;

// 		iterator	begin() { return (this->c.begin()); }
// 		iterator	end() { return (this->c.end()); }
// };

// #endif
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		using std::stack<T>::c;
		iterator begin() {return c.begin();};
		iterator end() {return c.end();};
};

#endif
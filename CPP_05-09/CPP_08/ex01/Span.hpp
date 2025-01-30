#ifndef SPAN_HPP  
#define SPAN_HPP

#include <vector>
#include <iterator>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;
	public:
		Span(unsigned int N);
		void addNumber(int num);
		int shortestSpan() const;  
		int longestSpan() const;

		template<typename InputIterator>
		void addNumbers(InputIterator begin, InputIterator end) {
			size_t numElementsToAdd = std::distance(begin, end);
			if(_numbers.size() + numElementsToAdd > _maxSize)
				throw std::runtime_error("Not enough space to add all elements!");
			_numbers.insert(_numbers.end(), begin, end);
		}  
};


#endif
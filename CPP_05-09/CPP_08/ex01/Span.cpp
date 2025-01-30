#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int N) : _maxSize(N) {}

void Span::addNumber(int num) {
	if (_numbers.size() == _maxSize)
		throw std::runtime_error("Max size reached: Span is full!");
	else
		_numbers.push_back(num);
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("Need at least 2 numbers to compute spans!");
	
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minGap = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		int currentGap = sorted[i] - sorted[i - 1];
		if (currentGap < minGap)
			minGap = currentGap;
	}
	return minGap;
}

int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw std::runtime_error("Need at least 2 numbers to compute spans!");

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	return sorted.back() - sorted.front();
}
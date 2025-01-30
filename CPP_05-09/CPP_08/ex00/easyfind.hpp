#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T& container, int value) {
	typename T::iterator val;
	val = std::find(container.begin(), container.end(), value);
	if (val != container.end()) {
		return val;
	}
	else {
		throw std::runtime_error("Value not found");
	}
}

#endif
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <ostream>

template <typename T>
class Array {
	private:
		T*				_elements;
		unsigned int	_size;

	public:
		Array() : _elements(NULL), _size(0) {}

		// explicit Array(unsigned int n) : _elements(NULL), _size(n) {
		// 	if (n > 0)
		// 		_elements = new T[n](); 
    	// }

		explicit Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

		Array(const Array &other) : _elements(NULL), _size(0) {
			_size = other._size;
			if (_size > 0) {
				_elements = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_elements[i] = other._elements[i];
			}
		}

		Array &operator=(const Array &other) {
			if(this != &other) {
				T* new_elements  = NULL;
				unsigned int new_size = other._size;
				if (new_size > 0) {
					new_elements = new T[new_size];
					for (unsigned int i = 0; i < new_size; i++)
						new_elements[i] = other._elements[i];
				}
				delete [] _elements;
				_elements = new_elements;
				_size = other._size;
			}
			return *this;
		}

		T& operator[](unsigned int index) {
			if (index >= _size)
				throw std::out_of_range("Index out of bounds");
			else
				return _elements[index];
		}

		const T& operator[](unsigned int index) const {
			if (index >= _size)
				throw std::out_of_range("Index out of bounds");
			else
				return _elements[index];
		}

		~Array() {
			delete [] _elements;
		}
		unsigned int size() const {
			return _size;
		}

};


#endif
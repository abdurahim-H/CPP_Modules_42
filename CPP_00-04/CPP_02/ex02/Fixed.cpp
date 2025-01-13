#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_rawbits = other._rawbits;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_rawbits = other._rawbits;
	}
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawbits;
}


void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawbits = raw;
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawbits = (value << _fractionalBits);
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawbits = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->_rawbits) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const {
	return (this->_rawbits >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(Fixed const &other) const {
	return this->_rawbits > other._rawbits;
}

bool Fixed::operator<(Fixed const &other) const {
	return this->_rawbits < other._rawbits;
}

bool Fixed::operator>=(Fixed const &other) const {
	return this->_rawbits >= other._rawbits;
}

bool Fixed::operator<=(Fixed const &other) const {
	return this->_rawbits <= other._rawbits;
}

bool Fixed::operator==(Fixed const &other) const {
	return this->_rawbits == other._rawbits;
}

bool Fixed::operator!=(Fixed const &other) const {
	return this->_rawbits != other._rawbits;
}

Fixed Fixed::operator+(Fixed const &other) const {
	Fixed result;
	result = this->_rawbits + other._rawbits;
	return result;
}

Fixed Fixed::operator-(Fixed const &other) const {
	Fixed result;
	result = this->_rawbits - other._rawbits;
	return result;
}

Fixed Fixed::operator*(Fixed const &other) const {
	Fixed result(this->toFloat() * other.toFloat());
	return result;
}

Fixed Fixed::operator/(Fixed const &other) const {
	if (other._rawbits == 0) {
		std::cerr << "Error: division by zero" << std::endl;
		return (Fixed(0));
	}
	float quotent = this->toFloat() / other.toFloat();
	return Fixed(quotent);
}

Fixed &Fixed::operator++() {
	this->_rawbits += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->_rawbits += 1;
	return temp;
}

Fixed &Fixed::operator--() {
	this->_rawbits -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->_rawbits -= 1;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	return (a > b) ? a : b;
}

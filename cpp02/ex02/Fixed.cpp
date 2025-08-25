/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:20:03 by marvin            #+#    #+#             */
/*   Updated: 2025/08/24 13:20:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed::Fixed(const int val) {
    _rawBits = val << _fractionalBits;
}

Fixed::Fixed(const float val) {
    _rawBits = roundf(val * (1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        _rawBits = other._rawBits;
    return *this;
}

int Fixed::getRawBits(void) const {
    return _rawBits;
}

void Fixed::setRawBits(int const raw) {
    _rawBits = raw;
}

int Fixed::toInt(void) const {
    return _rawBits >> _fractionalBits;
}

float Fixed::toFloat(void) const {
    return (float)_rawBits / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) const { return _rawBits > other._rawBits; }
bool Fixed::operator<(const Fixed& other) const { return _rawBits < other._rawBits; }
bool Fixed::operator>=(const Fixed& other) const { return _rawBits >= other._rawBits; }
bool Fixed::operator<=(const Fixed& other) const { return _rawBits <= other._rawBits; }
bool Fixed::operator==(const Fixed& other) const { return _rawBits == other._rawBits; }
bool Fixed::operator!=(const Fixed& other) const { return _rawBits != other._rawBits; }

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other.toFloat() == 0.0f) {
        std::cerr << "Warning: division by zero!" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
    _rawBits++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    _rawBits++;
    return tmp;
}

Fixed& Fixed::operator--() {
    _rawBits--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    _rawBits--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}
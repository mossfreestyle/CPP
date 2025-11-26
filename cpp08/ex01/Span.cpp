/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:27:34 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/25 16:27:50 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0) {}
Span::Span(unsigned int N) : _maxSize(N) {}
Span::Span(const Span& other) : _maxSize(other._maxSize), _data(other._data) {}
Span::~Span() {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		_maxSize = other._maxSize;
		_data = other._data;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (_data.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_data.push_back(number);
}

int Span::shortestSpan() const {
	if (_data.size() < 2)
		throw std::runtime_error("Not enough elements to find a span");

	std::vector<int> sorted = _data; // copy
	std::sort(sorted.begin(), sorted.end());

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i) {
		int diff = sorted[i] - sorted[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}
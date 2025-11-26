/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:16:02 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/25 16:18:04 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // std::find
#include <stdexcept>
#include <iostream>

// Non-const version
template <typename T>
typename T::iterator easyfind(T& container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return it;
}

// Const version
template <typename T>
typename T::const_iterator easyfind(const T& container, int value) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return it;
}

template <typename Container>
void printContainer(const Container& container) {
	std::cout << "[ ";
	for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
}

#endif
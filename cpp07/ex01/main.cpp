/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:48:59 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/14 12:51:51 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void print(T const& x) {
	std::cout << x << std::endl;
}

void shoutChar(char const& c) {
	std::cout << static_cast<char>(std::toupper(c)) << std::endl;
}

int main(void) {
	std::cout << "--- int test ---" << std::endl;
	int intArr[] = {1, 2, 3, 4, 5};
	::iter(intArr, 5, print);

	std::cout << "--- string test ---" << std::endl;
	std::string strArr[] = {"hello", "world", "template", "function"};
	::iter(strArr, 4, print);

	std::cout << "--- char test ---" << std::endl;
	char charArr[] = {'a', 'b', 'c', 'd'};
	::iter(charArr, 4, shoutChar);

	return 0;
}
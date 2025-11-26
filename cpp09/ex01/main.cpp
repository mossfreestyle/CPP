/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moss <moss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:39:20 by moss              #+#    #+#             */
/*   Updated: 2025/11/26 10:40:58 by moss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::cerr << "Error: Wrong number of argument" << std::endl;
        return 1;
    }
    
    std::string input = argv[1];
    if (input.empty()) {
        std::cerr << "Error: Empty input" << std::endl;
        return 1;
    }

    try {
        int result = RPN::evaluate(input);
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
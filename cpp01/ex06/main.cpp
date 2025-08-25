/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:55:43 by marvin            #+#    #+#             */
/*   Updated: 2025/08/24 12:55:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    
    std::string level = argv[1];
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            index = i;
            break;
        }
    }

    Harl harl;

    switch (index) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:44:43 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/15 16:55:20 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main() {

    PhoneBook phoneBook;
    std::string command;
    
    std::cout << "Welcome to the PhoneBook!" << std::endl;
    
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (std::cin.eof()) {
            std::cout << "\nGoodbye!" << std::endl;
            break;
        }
        
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT") {
            std::cout << "Exiting PhoneBook..." << std::endl;
            break;
        } else
            std::cout << "Invalid command. Please try again." << std::endl;
    }   
    return 0;
}
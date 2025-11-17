/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:58:27 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/11 12:25:09 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
    Data data;
    data.info = "Hello, world!";
    data.number = 42;
    
    std::cout << "Original pointer: " << &data << std::endl;
    
    uintptr_t raw = Serializer::serialize(&data);
    Data* ptr = Serializer::deserialize(raw);

    std::cout << "Deserialized pointer: " << ptr << std::endl;
    std::cout << "Info: " << ptr->info << std::endl;
    std::cout << "Number: " << ptr->number << std::endl;

    if (ptr == &data)
        std::cout << "Success! Same pointer." << std::endl;
    else
        std::cout << "Failed! Pointers differ." << std::endl;

    std::cout << "\nSerialized (uintptr_t) as decimal: " << raw << std::endl;
    std::cout << "Serialized (uintptr_t) as hex: 0x" << std::hex << raw << std::endl;
    
    return 0;
}
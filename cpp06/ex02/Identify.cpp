/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:59:30 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/12 14:23:47 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base* generate(void) {
    std::srand(std::time(NULL));
    int r = std::rand() % 3;
    
    switch (r)
    {
    case 0:
        std::cout << "Generate A" << std::endl;
        return new A;
    case 1:
        std::cout << "Generate B" << std::endl;
        return new B;
    case 2:
        std::cout << "Generate C" << std::endl;
        return new C;
    default:
        return NULL;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "Identified : A (via pointer)" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identified : B (via pointer)" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identified : C (via pointer)" << std::endl;
    else
        std::cout << "Identified : Unknow (via pointer)" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "Identified : A (via ref)" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "Identified : B (via ref)" << std::endl;
        return;
    } catch (...) {}
    
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "Identified : C (via ref)" << std::endl;
        return;
    } catch (...) {}
    
    std::cout << "Identified : Unknow (via ref)" << std::endl;
}
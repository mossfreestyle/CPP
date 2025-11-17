/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:25:20 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/12 14:13:07 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>

int main(void) {
    std::cout << "=== generate() test ===" << std::endl;
    Base* ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;

    std::cout << "\n=== Test with nullptr ===" << std::endl;
    Base* null_ptr = NULL;
    identify(null_ptr);

    std::cout << "\n=== Manual test with pure Base ===" << std::endl;
    Base base_obj;
    identify(&base_obj);
    identify(base_obj);

    std::cout << "\n=== Manual tests (stack objects) ===" << std::endl;
    A a;
    B b;
    C c;

    identify(a);
    identify(b);
    identify(c);
    
    std::cout << "\n=== Manual tests (heap objects) ===" << std::endl;
    Base* a_ptr = new A;
    Base* b_ptr = new B;
    Base* c_ptr = new C;
    
    identify(a_ptr);
    identify(b_ptr);
    identify(c_ptr);

    delete a_ptr;
    delete b_ptr;
    delete c_ptr;
    
    return 0;
}
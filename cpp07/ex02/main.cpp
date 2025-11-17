/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:00:19 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/17 14:41:08 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main() {
    Array<int> tab(5);

    for (int i = 0; i < tab.size(); i++)
        tab[i] = i * 10;

    for (int i = 0; i < tab.size(); i++)
        std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
    
    Array<int> tab2 (tab);

    for (int i = 0; i < tab2.size(); i++)
        std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;

    Array<int> tab3;
    tab3 = tab2;
    
    for (int i = 0; i < tab3.size(); i++)
        std::cout << "tab3[" << i << "] = " << tab3[i] << std::endl;

    std::cout << "size tab3: "<< tab3.size() << std::endl;
    return 0; 
}
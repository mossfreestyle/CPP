/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:27:28 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/15 17:36:15 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}
Zombie::~Zombie(void) {
    std::cout << _name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:01:59 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/20 20:22:44 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon){
    _weapon = &weapon;
}

void HumanB::attack(void){
    if (_weapon)
        std::cout << _name << " t'attaque avec " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " n'a pas d'arme cet imbecile" << std::endl;
}
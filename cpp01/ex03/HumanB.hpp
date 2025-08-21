/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:55:07 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/20 20:01:16 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);
        void attack(void);
};

#endif
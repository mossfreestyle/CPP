/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:11:18 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/20 20:25:31 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    {
        Weapon gun = Weapon("son flip reset");
        HumanA mineur("Mineur", gun);
        mineur.attack();
        gun.setType("son celling shot");
        mineur.attack();
    }
    {
        Weapon gun = Weapon("sa montre");
        HumanB moss("Moss");
        moss.setWeapon(gun);
        moss.attack();
        gun.setType("son nouveau casque");
        moss.attack();
    }
    return 0;
}
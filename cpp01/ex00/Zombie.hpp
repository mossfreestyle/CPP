/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:29:17 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/15 17:33:33 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
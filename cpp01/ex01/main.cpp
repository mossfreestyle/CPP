/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 10:03:57 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/18 10:08:47 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 0;
    Zombie* horde = zombieHorde(N, "Moss");
    if (!horde)
        return 1;
    for (int i = 0; i < N; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}
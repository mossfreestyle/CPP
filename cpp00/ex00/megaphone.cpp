/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:13:47 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/15 10:35:24 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string str = av[i];
			for (size_t j = 0; j < str.size(); ++j)
				str[j] = std::toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
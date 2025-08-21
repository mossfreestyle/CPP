/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:44:31 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/13 12:38:57 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

class PhoneBook {
private:
	Contact _contacts[8];
	int		_index;
	int		_count;
public:
	PhoneBook();
	void addContact();
	void searchContact() const;
};

#endif
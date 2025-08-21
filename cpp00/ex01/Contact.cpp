/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:43:22 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/15 10:45:07 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName) {
    _firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	_lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {
    return _firstName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

std::string Contact::getNickname() const {
    return _nickname;
}

std::string Contact::getPhoneNumber() const {
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return _darkestSecret;
}
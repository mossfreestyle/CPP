/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:45:08 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/12 15:17:48 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <limits.h>
#include <cmath>
#include <cerrno>

class ScalarConverter {
private:
    ScalarConverter();  // non-instantiable
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
public:
    static void convert(const std::string& literal);
};

#endif
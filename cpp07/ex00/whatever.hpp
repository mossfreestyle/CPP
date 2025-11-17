/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:25:59 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/14 12:35:23 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T const& min(T const& a, T const& b) {
    if (a < b)
        return a;
    return b;
}

template<typename T>
T const& max(T const& a, T const& b) {
    if (a > b)
        return a;
    return b;
}

#endif
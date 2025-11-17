/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:46:27 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/14 12:48:54 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T* array, int len, void (*f)(T const&)) {
    if (!array || !f || len < 0)
        return;
    for (int i = 0; i < len; ++i)
        f(array[i]);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:54:42 by rwassim           #+#    #+#             */
/*   Updated: 2025/11/17 14:40:38 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

template <class T> class Array{

public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    T& operator[](unsigned int idx);
    ~Array();

    int size() const;

    class IdxTooHigh: public std::exception{
        public:
            const char* what() const throw();     
    };
private:
    T *_tab;
    unsigned int _size;
};

#include "Array.tpp"
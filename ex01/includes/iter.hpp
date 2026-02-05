/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:49:53 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/05 14:28:28 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void iter(T *a, const T b, void (*f)(T&)){
    for (size_t i = 0; i < b; i++)
    {
        f(a[i]);
    }
};


#endif
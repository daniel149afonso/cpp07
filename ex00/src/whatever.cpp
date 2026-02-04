/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:04:48 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/03 22:09:56 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void swap(int &a, int &b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int& max(int &a, int &b)
{
    if (a > b)
        return a;
    return (b);
}

int& min(int &a, int &b)
{
     if (a < b)
        return a;
    return (b);
}

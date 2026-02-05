/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:48:27 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/05 14:15:23 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void print_value(const T& value)
{
    std::cout << value << std:endl;
}

int main(void)
{
    std::string str = "Hello";
    
    ::iter(str, str.size(), print_value);
    return (0);
}
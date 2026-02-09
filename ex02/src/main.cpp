/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:48:27 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/09 14:01:59 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void print_value(const T& value)
{
    std::cout << value << std::endl;
}

void ft_toupper(std::string& str)
{
   for (size_t i = 0; i < str.size(); i++)
        str[i] = std::toupper(static_cast<unsigned char>(str[i]));
}

void increment(int& nb)
{
    nb *= 100;
}

void test_string_array()
{
    std::cout << "\n\n### TESTING STRING ARRAY CONST AND NON-CONST ###\n\n" << std::endl;
    
    const std::string unchangeable[] = {"Hello,", "my friend"};
    const size_t len = sizeof(unchangeable) / sizeof(unchangeable[0]);
    
    std::string changeable[] = {"I am,", "Naruto Uzumaki"};
    const size_t len1 = sizeof(changeable) / sizeof(changeable[0]);

    std::cout << "\033[34mConst array\033[0m" << std::endl;
    ::iter(unchangeable, len, print_value);
    std::cout << "\n\033[34mNon-Const array\033[0m" << std::endl;
    ::iter(changeable, len1, print_value);
    ::iter(changeable, len1, ft_toupper);
    std::cout << "----------------------------\n";
    ::iter(changeable, len1, print_value);
    std::cout << std::endl;
}

void test_int_array()
{
    std::cout << "\n\n### TESTING INT ARRAY CONST AND NON-CONST ###\n\n" << std::endl;
    const int unchangeable[] = {4, 8, 12};
    const size_t len = sizeof(unchangeable) / sizeof(unchangeable[0]);

    int changeable[] = {5, 10, 15};
    const size_t len1 = sizeof(changeable) / sizeof(changeable[0]);
    
    std::cout << "\033[34mConst array\033[0m" << std::endl;
    ::iter(unchangeable, len, print_value);
    std::cout << "\n\033[34mNon-Const array\033[0m" << std::endl;
    ::iter(changeable, len1, print_value);
    ::iter(changeable, len1, increment);
    std::cout << "----------------------------\n";
    ::iter(changeable, len1, print_value);
    std::cout << std::endl;
}

int main(void)
{
    test_string_array();
    test_int_array();
    return (0);
}
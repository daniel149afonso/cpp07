/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:48:27 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/06 15:55:12 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

template <typename T>

void print_value(const std::string& str)
{
    std::cout << str << std::endl;
}

void ft_toupper(std::string& str)
{
   for (size_t i = 0; str[i] != '\0'; i++)
        std::toupper(str[i]);
}

void test_string_array()
{
    std::cout << "\033[32m" << "Test string array\n"<< "\033[0m";
    std::string str[] = {"Hello,", "my friend"};
    std::string str1[] = {"I am,", "Naruto Uzumaki"};
    const size_t len = sizeof(str) / sizeof(str[0]);

    ::iter(str, len, print_value);
    std::cout << "----------------------------\n";
    ::iter(str1, len, ft_toupper);
}

void test_int_array()
{
    std::cout << "\033[32m" << "Test int array\n"<< "\033[0m";
    int numbers[] = {12, 32, 45, 9};
    const size_t len = sizeof(numbers) / sizeof(numbers[0]);

    ::iter(numbers, len, print_value);
}

int main(void)
{
    test_string_array();
    test_int_array();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:48:27 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/16 16:48:50 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

void testing_int_array()
{
	std::cout << "\n\n### TESTING INT ARRAY ###\n\n" << std::endl;
	Array<int> a(6);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = rand();
	a.print_all_data();
    std::cout << std::endl;
}

void testing_int_array_wrong_index()
{
	std::cout << "\n\n### TESTING INT ARRAY WRONG INDEX ###\n\n" << std::endl;
	Array<int> b(6);
	try
	{
		b[10] = 96;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: "<< e.what() << '\n';
	}
}

void testing_string_array()
{
	std::cout << "\n\n### TESTING STRING ARRAY ###\n\n" << std::endl;
	Array<std::string> a(4);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = "Mr. Game and Watch";
	a.print_all_data();
    std::cout << std::endl;

}

void testing_string_array_wrong_index()
{
	std::cout << "\n\n### TESTING STRING ARRAY WRONG INDEX ###\n\n" << std::endl;
	Array<std::string> b(4);

	try
	{
		b[10] = "Captain Falcon";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: "<< e.what() << '\n';
	}

}

void testing_struct_array()
{
	std::cout << "\n\n### TESTING STRUCT ARRAY ###\n\n" << std::endl;
	Array<t_struct> a(4);

	for (unsigned int i = 0; i < a.size(); i++)
	{
		a[i].nb = rand();
		a[i].str = "Pikachu";
	}
	for (unsigned int i = 0; i < a.size(); i++)
	{
		std::cout << a[i].str << ": " << a[i].nb << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	srand(time(NULL));
	Array <int> a;

	testing_int_array();
	testing_int_array_wrong_index();
	testing_string_array();
	testing_string_array_wrong_index();
	testing_struct_array();
    return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:49:53 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/14 17:14:41 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <cctype>
#include <stddef.h>
#include <stdlib.h>

template <typename T> class Array
{
	private:
		T* _data;
		unsigned int _length;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		~Array();

		// Operators
		Array& operator=(const Array& other);
		T& operator[](unsigned int i);
		const T& operator[](unsigned int i) const;

		//public methods
		unsigned int size() const;
		void print_all_data();

		//Exceptions
		class OutOfBounds : public std::exception{
			const char* what() const throw();
		};
};

typedef struct s_struct{
	int nb;
	std::string str;
} t_struct;

#include "../src/Array.tpp"
#endif

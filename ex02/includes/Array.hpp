/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:49:53 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/09 14:27:40 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <cctype>
#include <stddef.h>

template <typename T> class Array
{
    private:
        T* _data;
        unsigned int _length;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array<int>& operator=(const Array& other);
        ~Array();

        //public methods
        unsigned int size() const;

        //Exceptions
        class OutOfBounds : public std::exception{
            const char* what() const throw();
        }
};

#include "Array.tpp"
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:52:34 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/09 19:37:20 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T> Array<T>::Array()
{
    _data = NULL;
    _length = 0;
}

template <typename T> Array<T>::Array(unsigned int n): _length(n)
{
    _data = new T[_length];
}

template <typename T> Array<T>::Array(const Array& other)
{
    _length = other._length;
    _data = new T[_length];
}

template <typename T> Array<int>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return *this;
    _length = other._length;
    _data = new T[_length];
    return *this;
}

template <typename T> Array<T>::~Array()
{
    delete _data[_length];
}

template <typename T> unsigned int Array<T>::size() const
{
    return _length;
}

template <typename T> const char* Array<T>::OutOfBounds::what() const throw()
{
    return ("index is out of bounds");
}
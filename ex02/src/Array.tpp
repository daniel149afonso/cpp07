/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:52:34 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/12 18:50:37 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

// Default Constructor
template <typename T> Array<T>::Array()
{
    _data = NULL;
    _length = 0;
}

// Constructor
template <typename T>
Array<T>::Array(unsigned int n): _length(n)
{
    _data = new T[_length];
}

// Copy Constructor
template <typename T>
Array<T>::Array(const Array& other)
{
    _length = other._length;
    _data = new T[_length];
    for (unsigned int i = 0; i < _length; i++)
        _data[i] = other._data[i];
}

// Assignement Operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return *this;
    _length = other._length;
    delete[] _data;
    _data = new T[_length];
    for (unsigned int i = 0; i < _length; i++)
        _data[i] = other._data[i];
    return *this;
}

// Access Operator Non-Const
template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _length)
        throw OutOfBounds();
    return (_data[i]);
}

// Access Operator Const
template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= _length)
        throw OutOfBounds();
    return (_data[i]);
}

// Destructor
template <typename T>
Array<T>::~Array()
{
    delete[] _data;
}

// Getters
template <typename T>
unsigned int Array<T>::size() const
{
    return _length;
}

// Print all data
template <typename T>
void Array<T>::print_all_data()
{
	for (unsigned int i = 0; i < _length; i++)
	{
		std::cout << _data[i];
	}
	std::cout << std::endl;
}

// Exception
template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
    return ("index is out of bounds");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:16:41 by lbohm             #+#    #+#             */
/*   Updated: 2025/01/09 23:01:46 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	this->arr = nullptr;
	this->n = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->arr = new T[n]();
	this->n = n;
}

template <typename T>
Array<T>::Array(const Array &cpy)
{
	this->arr = new T[cpy.size()]();
	this->n = cpy.n;
	for (int i = 0; i < cpy.n; i++)
		this->arr[i] = cpy.arr[i];
}

template <typename T>
Array<T>	&Array<T>::operator= (const Array &cpy)
{
	if (this != cpy)
	{
		delete[] this->arr;
		this->arr = new T[cpy.size()]();
		this->n = cpy.n;
		for (int i = 0; i < cpy.n; i++)
			this->arr[i] = cpy.arr[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[] (unsigned int i)
{
	if (i > this->n)
		throw OutOfBound();
	return (this->arr[i]);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->arr;
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->n);
}

template <typename T>
const char	*Array<T>::OutOfBound::what(void) const throw()
{
	return ("Index is out of bound");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:47:37 by lucabohn          #+#    #+#             */
/*   Updated: 2025/01/09 20:18:48 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	power(int &nbr);

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	iter(arr, 5, power);
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	return (0);
}

void	power(int &nbr)
{
	nbr *= nbr;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:47:37 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/10 10:31:15 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	power(int &nbr);

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};

	iter(arr, 5, test<int>);
	iter(arr, 5, power);
	std::cout << std::endl;
	iter(arr, 5, test<int>);
	return (0);
}

void	power(int &nbr)
{
	nbr *= nbr;
}

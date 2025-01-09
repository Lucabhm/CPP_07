/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:09:33 by lbohm             #+#    #+#             */
/*   Updated: 2025/01/09 23:02:24 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	a(5);
	Array<int>	b(a);

	std::cout << "size of a = " << a.size() << std::endl;
	std::cout << "first" << std::endl;
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	for (int i = 0; i < a.size(); i++)
		a[i] = i;
	std::cout << "second" << std::endl;
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	try
	{
		a[10] = 11;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "third" << std::endl;
	for (int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	std::cout << "print b" << std::endl;
	for (int i = 0; i < a.size(); i++)
		std::cout << b[i] << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:46:01 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/10 10:31:25 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void	iter(T *addr, int size, F func)
{
	if (addr != nullptr)
	{
		for (int i = 0; i < size; i++)
			func(addr[i]);
	}
}

template <typename T>
void	test(T &value)
{
	std::cout << value << " ";
}

#endif
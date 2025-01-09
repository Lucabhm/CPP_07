/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:46:01 by lucabohn          #+#    #+#             */
/*   Updated: 2025/01/09 20:06:19 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void	iter(T *addr, int size, F func)
{
	for (int i = 0; i < size; i++)
	{
		func(addr[i]);
	}
}

#endif
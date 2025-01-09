/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:10:02 by lucabohn          #+#    #+#             */
/*   Updated: 2025/01/09 22:51:08 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T				*arr;
		unsigned int	n;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &cpy);
		Array	&operator= (const Array &cpy);
		T		&operator[] (unsigned int i);
		~Array(void);
		unsigned int	size(void) const;
		class OutOfBound : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

# include "Array.tpp"

#endif
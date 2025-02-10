/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:10:02 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/10 10:48:30 by lbohm            ###   ########.fr       */
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
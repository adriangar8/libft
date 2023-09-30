/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:17:39 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:49:44 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_;
	unsigned char	c_;
	size_t			i;

	s_ = (unsigned char *)s;
	c_ = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s_ == c_)
			return ((void *)s_);
		s_++;
		i++;
	}
	return ((void *)0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable s_; type unsigned char *
	2 - declaration of the variable c_; type unsigned char
	3 - declaration of the variable i; type size_t

	SET VARIABLES:
	1 - set the value of s_ to the cast of s passed as a parameter
	2 - set the value of c_ to the cast of c passed as a parameter
	3 - set the value of i to 0
	iterate over s_ until i is greater than or equal to 0

		check if the content of s_ is equal to c
			if yes, return the cast to void of s_
		increment s_ by 1
		increment i by 1
	
	* note that if no equal characters were to be found the function returns NULL
*/
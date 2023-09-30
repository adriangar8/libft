/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:51:22 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:50:32 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*b_;
	unsigned char	z;
	size_t			i;

	b_ = b;
	z = c;
	i = 0;
	while (i < len)
		b_[i++] = z;
	return ((void *)b);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable b_; type char*
	2 - declaration of the variable z; type unsigned int
	3 - declaration of the variable i; type size_t

	SET VARIABLES:
	1 - set b_ to the cast of void *b passed as an argument; be able to access it
	2 - set z to the cast of int c passed as an argument; required by the function
	3 - set i to 0
	iterate over the elements of b_ len times
		at each position of string b set its value to z; increase i by one
	return the value b passed as an argument; now  modified
*/
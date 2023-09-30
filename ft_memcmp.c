/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:07:52 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:49:56 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*s1_;
	unsigned char		*s2_;
	size_t				i;
	int					res;

	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_[i] != s2_[i])
		{
			res = s1_[i] - s2_[i];
			return (res);
		}
		i++;
	}
	return (0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable s1_; type unsigned char *
	2 - declaration of the variable s2_; type unsigned char *
	3 - decaration of the variable i; type int;
	4 - declaration of the variable i; type 0

	SET VARIABLES:
	1 - set the value of s1_ to the cast of s1 passed as a parameter
	2 - set the value of s2_ to the cast of s2 passed as a parameter
	3 - set the value of i to 0
	iterate over s1_ and s2_ until i is greater than or equal to n

		check if s1_ is not equal to s2_

			if yes, perform the difference of s1_ and s2_ and store it on res
			return res;

		increment i by 1
	
	* note that if no unequal characters were to be found the function returns NULL
*/
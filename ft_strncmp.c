/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:05:20 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:55:15 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	res;
	size_t			i;

	i = 0;
	if ((s1[i] == '\0' && s2[i] == '\0') || n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] && s2[i])
		i++;
	res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable res; type unsigned int
	2 - declaratino of the variable i; type size_t

	SET VARIABLES:
	2 - set the value of i to 0
	check if s1 and s2 are not finished; also check if n is not 0
		if true, return 0
	iterate over s1 and s2 until either ends, i is greater or equal to n or s1 
		increment i by 1
	1 - set res to the character at position i of s1 minus the character at position
	i of s2
	return the variable res
*/
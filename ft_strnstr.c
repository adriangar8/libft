/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:32:49 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:55:34 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*t_haystack;
	char	*t_needle;

	i = 0;
	j = 0;
	t_haystack = (char *)haystack;
	t_needle = (char *)needle;
	if (t_needle[j] == '\0')
		return (t_haystack);
	while (t_haystack[i] && i < n)
	{
		j = 0;
		if (t_haystack[i] == t_needle[j])
		{
			while (t_needle[j] && i + j < n && t_haystack[i + j] == t_needle[j])
				j++;
			if (t_needle[j] == '\0')
				return (&t_haystack[i]);
		}
		i++;
	}
	return (0);
}

/*
	VARIABLE DECLARATION;
	1 - declaration of the variable i; type size_t
	2 - declaration of the variable j; type size_t
	3 - decaration of the variable t_haystack; type char *
	4 - declaration of the variable t_needle; type char *

	SET VARIABLES:
	1 - set the variable i to 0
	2 - set the variable j to 0
	3 - set the variable t_haystack to haystack; cast to char *
	4 - set the variable t_needle to needle; cast to char *
	check if the needle passed as a parameter contains anything
		if true, return the variable t_haystack
	iterate over the haystack and the needle n times or until the haystack ends

		2 - 
*/
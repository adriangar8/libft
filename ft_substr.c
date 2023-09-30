/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:39:57 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:01 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_str;
	char		*ptr;

	if (ft_strlen(s) == 0)
		return (ft_strdup(s));
	len_str = ft_strlen(s);
	if (start > len_str - 1)
		len = 0;
	else if (len > len_str - start)
		len = len_str - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return ((char *)0);
	if (len == 0)
		return (ft_memset(ptr, 0, 1));
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}

/*
if (ft_strlen(s) == 0) /// Check if the string passed as a argument is empty.
if (start > len_str - 1) /// Check if the start passed is out of range.
else if (len > len_str - start) /// Validate the length.
if (!ptr) /// Check the allocation of dynamic memory.
*/
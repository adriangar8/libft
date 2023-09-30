/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:58:54 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:52:55 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s1);
	ptr = malloc((size + 1) * 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, (size + 1));
	return (ptr);
}

/*
ptr = malloc((size + 1) * 1); /// Size of char = 1. size + 1 due to the NULL 
terminator.
*/
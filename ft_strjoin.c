/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:45:40 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:54:00 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*aux;
	size_t		i;
	size_t		j;

	aux = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!aux)
		return (NULL);
	else if (!s1 && !s2)
		return (0);
	while (i < (ft_strlen(s1)))
	{
		aux[i] = s1[i];
		i++;
	}
	while (j < (ft_strlen(s2)))
		aux[i++] = s2[j++];
	aux[i] = '\0';
	return (aux);
}

/*
else if (!s1 && !s2) /// Check if the pointers passed as parameters exist.
*/
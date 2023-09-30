/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:45:12 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:54:30 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the int variable n for the length of the string.

	SET VARIABLES:
	1 - initially, set the length of the string to 0.
	iterate over the string until the end of the string is reached.
		increment by one the value of n.
	return the length of the string (n).
*/
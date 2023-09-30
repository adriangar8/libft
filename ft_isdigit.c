/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:30:06 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:09 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned int	i;

	i = (unsigned int)c;
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable i.

	SET VARIABLES:
	1 - set i to the cast of int c passed as argument.
	check if the character passed as argument is a digit (0-9).
		return 1 if the character is a digit (0-9).
	otherwise, return 0.
*/
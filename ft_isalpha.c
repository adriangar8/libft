/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:10:10 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:15 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned int	i;

	i = (unsigned int)c;
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	return (0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable i.

	SET VARIABLES:
	1 - set i to the cast of int c passed as argument.
	check if the character passed as argument is a letter (uppercase or lowercase).
		return 1 if the character is a letter (uppercase or lowercase).
	otherwise, return 0.
*/
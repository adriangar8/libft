/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:35:51 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:23 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned int	i;

	i = (unsigned int)c;
	if (ft_isdigit(i) == 1 || ft_isalpha(i) == 1)
		return (1);
	return (0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable i.

	SET VARIABLES:
	1 - set i to the cast of int c passed as argument.
	check if the character passed as argument is an alphanumeric character.
		return 1 if the character is alphanumeric.
	otherwise, return 0.
*/
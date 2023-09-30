/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:10:04 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:11 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned int	i;

	i = (unsigned int)c;
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}

/*
	VARIABLE DECLARATION:
	none

	SET VARIABLES:
	none
	check if a character (passed as int in ASCII code) is printable.
		return 1 if it is.
	return 0 if it is not.
*/
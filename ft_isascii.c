/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:42:59 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:12 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
	VARIABLE DECLARATION:
	none

	SET VARIABLES:
	none
	check if a character (passed as int in ASCII code) is an ascii character.
		return 1 if it is.
	return 0 if it is not.
*/
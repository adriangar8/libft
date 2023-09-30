/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:16:04 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:06 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
	check if the character passed as a parameter is in between 'a' and 'z' in the 
	ASCII code table.
		if yes, substract 32 from the character in order to obtain the corresponding 
		ASCII code of its uppercase
	return the character
*/
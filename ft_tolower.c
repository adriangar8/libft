/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:41:00 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:03 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
	check if the character passed as a parameter is in between 'A' and 'Z' in the 
	ASCII code table.
		if yes, add 32 from the character in order to obtain the corresponding 
		ASCII code of its uppercase
	return the character
*/
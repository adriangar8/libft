/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:54:41 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:54:26 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while ((i < dstsize - 1) && (src[i]))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
* modify the pseudocode
	VARIABLE DECLARATION:
	1 - declaration of the variable i

	SET VARIABLES:
	1 - set i to 0
	check if the pointers dst and src passed as parameters exist
		if not, return 0
	check if the destination buffer passed as a parameter is greater that 0

		if yes, iterate the dst and src while i is less than the destination buffer 
		size

			copy the actual content of src into the actual content of dst
			increment the variabl i by 1
		
		once the iteration is perfomed append the NULL terminating character at 
		the end of dst

	return the return value of the function ft_strlen passing as a parameter src
*/
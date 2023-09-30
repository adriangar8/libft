/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:17:57 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:57:27 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
/// count = number of elements to be allocated.
/// size = size of each element in bytes.

ptr = malloc(count * size); /// Pointer to the allocated memory.
bzero(ptr, count * size); /// The allocated memory is filled with byted of 
value 0.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:09:50 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:50:06 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	n_;
	unsigned int	i;
	char			*dst_;
	char			*src_;

	if (!dst && !src)
		return (NULL);
	n_ = n;
	i = 0;
	dst_ = (char *)dst;
	src_ = (char *)src;
	while (i < n_)
	{
		dst_[i] = src_[i];
		i++;
	}
	return ((void *) dst_);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable n_; type unsigned int
	2 - declaration of the variable i; type unsigned int
	3 - declaration of the variable dst_; type char *
	4 - declaration of the variable src_; type char *

	check if the dst and src pointers passed as parameters exist
		if true, return NULL
	SET VARIABLES:
	1 - set the value of n_ to n passed as an argument; required by the function
	2 - set the value of i to 0
	3 - set the value of dst_ to the cast of dst passed as argument; be able 
	to access it
	4 - set the value of src_ to the cast of src passed as argument; be able 
	to access it
	iterate over the dst_ and src_ variables n times

		copy the actual character from src_ to dst_
		increment i by 1
	
	return the dst_ variable; now modified and casting it to (void *)
*/
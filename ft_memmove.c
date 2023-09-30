/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:09:19 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:50:08 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dst_;
	const char		*src_;

	dst_ = (char *)dst;
	src_ = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst_ < src_)
		ft_memcpy(dst, src, len);
	else if (dst_ == src_)
		return ((void *)dst);
	else
	{
		while (len > 0)
		{
			dst_[len - 1] = src_[len - 1];
			len--;
		}
	}
	return ((void *)dst_);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable dst_; type char *
	2 - declaration of the variable src_; type char *

	SET VARIABLES:
	1 - set the value of dst_ to the cast of dst passed as argument; be able 
	to access it
	2 - set the value of src_ to the cast of src passed as argument; be able 
	to access it
	check if the pointers passed as an argument exist
		if not return NULL
	check if src is greater than dst. dst is previous in memory. overlap covered
		if there is call the function memcpy so that src is copied into dst
	check if dst_ is equal to src_
		return the variable dst passed as a parameter; cast to void *
	check if dst is greater than src; src is previous in memory. overlap covered

		iterate from right to left len times

			copy the actual position of src into the actual position of dst
			decrement by one len

	
	return dst_ by performing casting to void *
	* note that if both strings are equal dst is returned
*/
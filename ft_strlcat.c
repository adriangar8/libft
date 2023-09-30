/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:05:22 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:54:16 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize < dst_len)
		return (ft_strlen(src) + dstsize);
	while (dstsize > 0 && dst_len < dstsize - 1 && src[i])
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	while (src[i++])
		dst_len++;
	return (dst_len);
}

/*
*/

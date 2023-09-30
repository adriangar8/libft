/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:18:39 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:41:01 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_;
	void	*res;

	s_ = (char *)s;
	res = ft_memset(s_, '\0', n);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of variable s_; type char*
	2 - declaration of variable res; type void

	SET VARIABLES:
	1 - set s_ to the cast of s passed as argument; be able to pass it as argument
	2 - set res to the return value of the function ft_memset; writes n zeroed 
	bytes to the string s by passing as an argument the NULL terminated character /0
*/

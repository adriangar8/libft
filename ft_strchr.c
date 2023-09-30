/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:45:32 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:52:34 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_;
	char	z;
	int		len_s;
	int		i;

	s_ = (char *)s;
	z = c;
	len_s = ft_strlen(s);
	i = 0;
	while (i <= len_s)
	{
		if (*s_ == z)
			return (s_);
		s_++;
		i++;
	}
	return ((char *)0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable s_; type char*
	2 - declaration of the variable z; type char
	3 - declaration of the variable len_s; type int
	4 - declaration of the variable i; type int

	SET VARIABLES:
	1 - set the value of s_ to the cast of s passed as a parameter
	2 - set the the value of z to the cast of c passed as a argument
	3 - set the value of len_s to the the length of the string s passed as a 
	parameter
	4 - set the value of i to 0
	iterate the whole length of the string

		check if the content of s_ is equal to the z
			if yes, return a pointer pointing at the first ocurrence of c in s
		increment s_ by 1
		increment i by one
	
	return a cast of the to char * of 0 in case no first ocurrence of c was located
*/
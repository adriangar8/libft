/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:36:39 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:56:19 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_;
	char	z;
	int		i;
	int		coun;

	s_ = (char *)s;
	z = c;
	i = ft_strlen(s);
	coun = 0;
	while (coun < i)
	{
		coun++;
		s_++;
	}
	while (i >= 0)
	{
		if (*s_ == z)
			return (s_);
		s_--;
		i--;
	}
	return ((char *)0);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the variable s_; type char *
	2 - declaration of the variable z; type char
	3 - declaration of the variable i, type int
	4 - decalaration of the variable coun; type int

	SET VARIABLES:
	1 - set the value of s_ to the cast of s passed as a parameter
	2 - set the the value of z to the cast of c passed as a argument
	3 - set the value of i to the the length of the string s passed as a 
	parameter
	4 - set the value of coun to 0
	iterate until coun is equal to i

		increment coun by 1
		increment s_ by 1 in order to have the pointer pointing at the end of s_

	iterate until i is greater or equal to 0

		check if the content of the pointer s_ is equal to z
			if yes, return s_
		decrement s_ by 1
		decrement i by 1
	
	return a cast of the to char * of 0 in case no first ocurrence of c was located
*/
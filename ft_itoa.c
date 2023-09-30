/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:59:42 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/18 22:40:22 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenitoa(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_nummax(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str ;
	int		len;
	int		mod;

	len = ft_lenitoa(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	mod = 0;
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	while (n)
	{
		len--;
		mod = ft_nummax(n % 10);
		str[len] = '0' + mod;
		n /= 10;
	}
	return (str);
}

/*
if (n == 0) /// The lenght of the number 0 is zero.
while (n) /// n is not zero.
len = ft_lenitoa(n); /// Take the length of the integer.
if (!str) /// In case the allcation of dynamic memory fails.
if (n == 0) /// The number passed as a parameter is zero.
str[len] = '0' + mod; /// In order to pass the integer to 
char value without changing the content.
*/
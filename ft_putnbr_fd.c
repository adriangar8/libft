/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:30:33 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:50:52 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (fd)
	{
		if (num < 0)
		{
			ft_putchar_fd('-', fd);
			num *= -1;
		}
		if (num < 10)
			ft_putchar_fd('0' + num, fd);
		else
		{
			ft_putnbr_fd(num / 10, fd);
			ft_putchar_fd((num % 10) + '0', fd);
		}
	}
}

/*
num = (long)n; /// Cast to long integer value of int n.
if (fd) /// Check if the file descriptor is valid.
if (num < 0) /// In case the nmber passed as argument is negative.
ft_putchar_fd('0' + num, fd); /// '0' + in order to pass a char 
data structure.
ft_putchar_fd((num % 10) + '0', fd); /// '0' + in order to 
pass a char data structure. 
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:47:35 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:50:42 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write (fd, &c, 1);
}

/*
void	ft_putchar_fd(char c, int fd) /// fd = file descriptor = number that 
uniquely identifies an open file in a computer's operating system.
if (fd) /// Perform only if the file descriptor exists.
*/
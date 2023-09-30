/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:53:36 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:41:06 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		sig;
	char	*temp;

	i = 0;
	sig = 1;
	result = 0;
	temp = (char *)str;
	while (str[i] == ' ' || (temp[i] >= 9 && temp[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(temp[i]) == 1)
	{
		result = (result * 10) + (temp[i] - '0');
		i++;
	}
	return (result * sig);
}

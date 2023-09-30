/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:47:47 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/30 10:25:29 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_free(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
		free(ret[i++]);
	free(ret);
}

int	ft_countstrings(const char *str, char c)
{
	int	num_strings;
	int	i;

	i = 0;
	num_strings = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			num_strings++;
		i++;
	}
	return (num_strings);
}

char	**ft_subsplit(const char *str, char c, char **ret)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	start = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			ret[count] = ft_substr(str, start, i - start + 1);
			if (!ret[count])
			{
				ft_free(ret);
				return ((char **)0);
			}
			count++;
		}
		if (str[i] == c && (str[i + 1] != c || str[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	ret[count] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ret;

	i = 0;
	if (!s)
		return ((char **)0);
	ret = malloc(sizeof(char *) * (ft_countstrings(s, c) + 1));
	if (!ret)
		return ((char **)0);
	ret = ft_subsplit(s, c, ret);
	return (ret);
}

/*
ret[count] = ft_substr(str, start, i - start + 1); /// 
At a certain position in the return array, introduce the substring. 
if (!s) /// Check if the string passed as an argument is empty.
ret = malloc(sizeof(char *) * (ft_countstrings(s, c) + 1)); 
/// Dynamicaly alloate memory for the return. + 1 for the terminating NULL 
character.
ret = malloc(sizeof(char *) * (ft_countstrings(s, c) + 1)); 
/// Dynamicaly alloate memory for the return. + 1 
for the terminating NULL character.
*/
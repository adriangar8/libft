/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:13:20 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:46:31 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/*
int	main(void)
{
	t_list	*new;
	t_list	**node;

	new = (t_list *) malloc(sizeof(t_list));
	new->content = NULL;
	node = NULL;
	(*node) = *((t_list **) malloc(sizeof(t_list *)));
	(*node)->content = NULL;
	(*node)->next = *((t_list **) malloc(sizeof(t_list *)));
	((*node)->next)->content = NULL;
	((*node)->next)->next = NULL;
	ft_lstdelone(node, new);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:40:12 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 21:10:10 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		*lst = NULL;
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
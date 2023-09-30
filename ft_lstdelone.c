/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:06:18 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:46:27 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
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

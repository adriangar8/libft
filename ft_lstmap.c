/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:23:39 by adrigarc          #+#    #+#             */
/*   Updated: 2023/04/24 20:58:48 by adrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret_list;
	t_list	*new_node;
	void	*new_content;

	ret_list = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new_content = f(lst->content);
			new_node = ft_lstnew(new_content);
			if (!new_node)
			{
				free(new_content);
				ft_lstclear(&ret_list, del);
				return (0);
			}
			ft_lstadd_back(&ret_list, new_node);
			lst = lst->next;
		}
	}
	return (ret_list);
}

/*
	VARIABLE DECLARATION:
	1 - declaration of the list to be be returned.
	2 - declaration of the node to be appended at every iteration.
	3 - declaration of the content of the node to be appended at every iteration.

	SET VARIABLES:
	1 - set the list to be returned to NULL.
	check if the list to be iterated passed as a parameter is existent.

		iterate over the list.

			apply the function f passed as a parameter to the content of the list.
			create the new node of the return list with the new content.
			check if the reservation of dynamic memory was successful.

				free the dynamic memory used for the content of the new node.
				elimiate ret list (pass the direction in memory) with the function lst_clear.
				return (0) to exit the function.
*/
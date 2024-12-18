/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:43 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:35:45 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstmap - Applies a function to each element of a list and returns 
 * a new list with the results.
 *
 * This function creates a new linked list where each element is the result 
 * of applying the function `f` to the content of the corresponding element 
 * in the original list. If any allocation fails, the function frees any 
 * previously allocated memory before returning NULL.
 *
 * Parameters:
 * - lst: The first element of the original list.
 * - f: A pointer to the function that modifies the content of each element.
 * - del: A pointer to the function used to delete an element's content if 
 *        an allocation fails.
 *
 * Returns:
 * - A new list with the results of applying `f` to each element's content, 
 *   or NULL if an error occurs during allocation.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

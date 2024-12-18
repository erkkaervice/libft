/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:52 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:36:57 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstnew - Creates a new list element (node) with a given content.
 *
 * This function allocates memory for a new `t_list` node, assigns the given 
 * content to it, and sets its `next` pointer to NULL. The newly created node 
 * is returned. If memory allocation fails, the function returns NULL.
 *
 * Parameters:
 * - content: The content to be stored in the new node.
 *
 * Returns:
 * - A pointer to the newly created node, or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

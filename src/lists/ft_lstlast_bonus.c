/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:29 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:44:33 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstlast - Returns the last element of a linked list.
 *
 * This function traverses the linked list starting from the head (`lst`) 
 * until it reaches the last element, identified by its `next` pointer being 
 * NULL. 
 * If the list is empty (`lst` is NULL), the function returns NULL.
 *
 * Parameters:
 * - lst: The first element of the linked list.
 *
 * Returns:
 * - The last element of the list if it exists, otherwise NULL.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

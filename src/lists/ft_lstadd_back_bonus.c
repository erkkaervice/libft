/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:03 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:45:37 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstadd_back - Adds a new element to the end of a linked list.
 *
 * This function appends a new element (`new`) to the end of the list. If the 
 * list is empty (`*lst` is NULL), the new element becomes the head of the list. 
 * Otherwise, the function traverses the list to find the last element and links 
 * it to the new element, effectively extending the list.
 *
 * - List traversal: The function iterates through the list to find the 
 *   last element. Once the last node is found, its `next` pointer is updated 
 *   to point to the new element.
 * - Empty list handling: If the list is initially empty (i.e., `*lst == NULL`), 
 *   the new element becomes the first element.
 * - In-place modification: The list is modified in-place, with no new list 
 *   being returned. The function works directly on the provided list.
 *
 * Parameters:
 * - lst: A pointer to the first element of the linked list.
 * - new: The new element to be added to the list.
 *
 * Returns:
 * - Nothing. The linked list is modified in-place.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

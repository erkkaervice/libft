/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:08 by eala-lah          #+#    #+#             */
/*   Updated: 2025/05/06 15:35:39 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstadd_front - Adds a new element to the front of a linked list.
 *
 * This function inserts a new element (`new`) at the front of the list. The 
 * `next` pointer of the new element is set to point to the current head 
 * of the list, and then the head of the list is updated to the new element.
 *
 * - List insertion: The new element's `next` pointer is updated to point 
 *   to the current head, and the head pointer is updated to the new element. 
 *   This effectively places the new element at the beginning of the list.
 * - In-place modification: Like `ft_lstadd_back`, this function modifies 
 *   the list in place without returning a new list.
 *
 * Parameters:
 * - lst: A pointer to the first element of the linked list.
 * - new: The new element to be added to the front of the list.
 *
 * Returns:
 * - Nothing. The linked list is modified in-place.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:13 by eala-lah          #+#    #+#             */
/*   Updated: 2025/05/06 15:35:38 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstclear - Clears a linked list by deleting all its elements.
 *
 * This function recursively traverses through the list, calling the `del` 
 * function on each element's content to free its associated memory. After 
 * freeing the content, the element itself is freed, and the pointer to 
 * the list is set to NULL, effectively clearing the list.
 *
 * - Recursion: The function uses recursion to iterate through the list. 
 *   After processing the content of each element, the function frees 
 *   the element and proceeds to the next.
 * - Memory management: Both the content and the element itself are freed.
 *   The `del` function is used to properly free the content, allowing for 
 *   flexibility in handling different data types.
 * - In-place modification: The list is cleared in-place, and the pointer 
 *   to the list is set to NULL after all elements are freed.
 *
 * Parameters:
 * - lst: A pointer to the first element of the linked list to be cleared.
 * - del: A pointer to the function used to delete the content of each element.
 *
 * Returns:
 * - Nothing. The list is cleared in-place, and the pointer to the list is set 
 * to NULL.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}

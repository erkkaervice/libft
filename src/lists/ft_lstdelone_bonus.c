/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:18 by eala-lah          #+#    #+#             */
/*   Updated: 2025/05/06 15:35:40 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstdelone - Deletes a single element from the linked list.
 *
 * This function removes one element from the linked list by calling the 
 * provided `del` function on the element's content to free its memory. 
 * After deleting the content, the element itself is freed. The list is 
 * unchanged except for the removal of the specific element.
 *
 * - Element deletion: The function deletes a single element from the list. 
 *   The `del` function is called on the content of the element to free it, 
 *   and the element itself is freed after that.
 * - No impact on other elements: The function does not affect other elements 
 *   in the list. Only the specified element is deleted.
 *
 * Parameters:
 * - lst: The element to be deleted from the list.
 * - del: A pointer to the function used to delete the content of the element.
 *
 * Returns:
 * - Nothing. The element is removed and its memory is freed.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}

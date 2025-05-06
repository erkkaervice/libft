/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:24 by eala-lah          #+#    #+#             */
/*   Updated: 2025/05/06 15:35:40 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstiter - Iterates over each element of the list and applies a function.
 *
 * This function traverses the entire linked list and applies the provided 
 * function `f` to each element's content. The structure of the list is 
 * not modified; only the content of each node is processed.
 *
 * - List traversal: The function iterates through each element in the list 
 *   and applies the provided function to each node's content.
 * - In-place modification: The list structure is not altered, and the 
 *   function does not return anything. The purpose is solely to apply the 
 *   function to the content of each node.
 *
 * Parameters:
 * - lst: The first element of the linked list.
 * - f: A pointer to the function to be applied to each element's content.
 *
 * Returns:
 * - Nothing. The function iterates over the list and applies `f` to each 
 * node's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

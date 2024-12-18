/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:58 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:44:33 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstsize - Calculates the size (number of elements) of a linked list.
 *
 * This function iterates through the entire linked list, counting the number 
 * of elements (nodes) until the end is reached. The final count is then 
 * returned.
 * 
 * Parameters:
 * - lst: A pointer to the first node of the list.
 *
 * Returns:
 * - The number of nodes in the list.
 */
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

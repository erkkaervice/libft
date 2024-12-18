/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:27:14 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:16 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
 * ft_free - Frees dynamically allocated memory and sets the pointer to NULL.
 *
 * This function frees the memory pointed to by the `str` pointer and then 
 * sets it to NULL to avoid dangling pointers. This is helpful in preventing 
 * memory leaks by ensuring that the memory is properly freed after use.
 *
 * Parameters:
 * - str: A pointer to the memory to be freed.
 *
 * Returns:
 * - NULL, as the memory has been freed and the pointer set to NULL.
 */
char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:20:27 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:15:14 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_newstr - Allocates and returns a new string of size `n + 1`.
 *
 * This function allocates memory for a new string of the specified size, 
 * ensuring that there is room for a null-terminator at the end. The function 
 * sets the first character of the string to be the null terminator `\0` to 
 * ensure that it is initially an empty string. If memory allocation fails, 
 * the function returns `NULL`.
 *
 * Parameters:
 * - n: The desired length of the string to be allocated (excluding the 
 *   null-terminator).
 *
 * Returns:
 * - A pointer to the newly allocated string, or `NULL` if memory allocation 
 *   fails.
 */
char	*ft_newstr(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}

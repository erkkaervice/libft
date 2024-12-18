/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:48:05 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:18:56 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strchr - Locates the first occurrence of a character in a string.
 *
 * This function searches the string `s` for the first occurrence of the 
 * character `c`. It returns a pointer to the first occurrence of the character 
 * if found, or `NULL` if the character is not present. The search is performed 
 * until the null terminator is reached.
 *
 * Parameters:
 * - s: The string to search through.
 * - c: The character to locate in the string.
 *
 * Returns:
 * - A pointer to the first occurrence of the character `c`, or `NULL` if not 
 * found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

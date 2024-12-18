/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:00:26 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:24:23 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strrchr - Locates the last occurrence of a character in a string.
 *
 * This function searches the string `s` for the last occurrence of the 
 * character `c`. It returns a pointer to the located character, or NULL 
 * if the character is not found. The function starts by iterating over 
 * the string to find the character and stores its position if it is 
 * found. After scanning the string, it returns either the found character
 * or the last occurrence recorded.
 *
 * Parameters:
 * - s: The string to search.
 * - c: The character to locate.
 *
 * Returns:
 * - A pointer to the last occurrence of `c` in the string `s`, or NULL 
 *   if `c` is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*lso;

	lso = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lso = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)lso);
}

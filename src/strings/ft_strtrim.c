/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:05:40 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:25:07 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_check - Checks if a character is present in a set of characters.
 *
 * This function iterates through the string `set` and checks if the 
 * character `c` exists within it. It returns 1 if the character is 
 * found, and 0 if it is not. The function is used in the `ft_strtrim` 
 * function to identify characters that need to be trimmed from the 
 * beginning and end of the string.
 *
 * Parameters:
 * - set: The set of characters to search within.
 * - c: The character to search for in the set.
 *
 * Returns:
 * - 1 if the character `c` is found in `set`, otherwise 0.
 */
static size_t	ft_check(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

/*
 * ft_strtrim - Removes characters from the beginning and end of a string.
 *
 * This function trims the string `s1` by removing any characters found 
 * in the set `set` from both the start and the end of the string. It 
 * creates a new string without the unwanted characters, adjusting the 
 * length accordingly. The function first scans for leading and trailing 
 * characters to remove and then constructs a new string with the 
 * remaining characters.
 *
 * Parameters:
 * - s1: The string to trim.
 * - set: The set of characters to remove.
 *
 * Returns:
 * - A new string with the characters from `set` removed from both ends,
 *   or NULL if there is an error in memory allocation or if any input 
 *   is NULL.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*saw;
	char	*tri;

	i = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_check(set, s1[i]))
		i++;
	while (len > i && ft_check(set, s1[len - 1]))
		len--;
	saw = ft_newstr(len - i);
	if (!saw)
		return (NULL);
	tri = saw;
	while (i < len)
		*saw++ = s1[i++];
	*saw = '\0';
	return (tri);
}

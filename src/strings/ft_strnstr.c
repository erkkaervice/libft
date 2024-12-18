/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:46:28 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:29:12 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the first occurrence of the substring `needle` in the string 
 * `haystack`
 * within the first `len` characters of `haystack`. If `needle` is an empty 
 * string,
 * returns `haystack`.
 * 
 * The function returns `NULL` if `needle` is not found or if `len` is too 
 * small
 * to fit the substring.
 *
 * Parameters:
 *   - haystack: The string to search in.
 *   - needle: The substring to search for.
 *   - len: The maximum number of characters to search.
 *
 * Return value:
 *   - A pointer to the first occurrence of `needle` in `haystack`.
 *   - `NULL` if `needle` is not found within the first `len` characters of 
 * `haystack`.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ndl;
	size_t	hsl;

	ndl = ft_strlen(needle);
	hsl = ft_strlen(haystack);
	if (!haystack || !needle)
		return (NULL);
	if (ndl > len || hsl < ndl)
		return (NULL);
	if (ndl == 0 || len == 0)
		return ((char *)haystack);
	while (*haystack && len >= ndl)
	{
		if (!ft_strncmp(haystack, needle, ndl))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

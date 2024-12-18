/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:03:14 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:24:41 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_substr - Extracts a substring from a string starting at a given index.
 *
 * This function allocates and returns a substring from the string `s`,
 * starting at position `start` and with a maximum length of `len`. If
 * the `start` index is greater than or equal to the length of the string, 
 * an empty string is returned. The function ensures that the substring 
 * does not exceed the string boundaries.
 *
 * Parameters:
 * - s: The string to extract the substring from.
 * - start: The starting index for the substring.
 * - len: The maximum length of the substring.
 *
 * Returns:
 * - A newly allocated substring starting at `start` with a length of 
 *   `len`, or NULL if memory allocation fails or if `s` is NULL.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_newstr(0));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	str = ft_newstr(len);
	if (!str)
		return (NULL);
	ptr = str;
	s += start;
	while (len-- && *s)
		*str++ = *s++;
	*str = '\0';
	return (ptr);
}

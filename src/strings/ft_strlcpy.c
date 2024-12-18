/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:34:12 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:28:17 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies up to `dstsize - 1` characters from the string `src` to `dst`.
 * The destination string is always null-terminated.
 * 
 * If `dstsize` is 0, the function returns the length of the source string 
 * `src`.
 * Otherwise, it returns the total length of `src`, which may be greater than `
 * dstsize`.
 *
 * Parameters:
 *   - dst: The destination string to copy characters into.
 *   - src: The source string to copy characters from.
 *   - dstsize: The maximum number of characters to be copied.
 *
 * Return value:
 *   - Returns the length of the source string `src`.
 *   - If `dstsize` is 0, returns the length of `src`.
 *   - If `dstsize` is greater than or equal to the length of `src`, the 
 * string `dst`
 *     will contain all characters of `src` plus the null terminator.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

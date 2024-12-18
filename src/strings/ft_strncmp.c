/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:16:50 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:21:10 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compares up to `n` characters of the strings `s1` and `s2`.
 * If the strings are identical up to `n` characters, returns `0`.
 * Otherwise, it returns the difference between the first mismatching characters.
 *
 * Parameters:
 *   - s1: The first string to compare.
 *   - s2: The second string to compare.
 *   - n: The maximum number of characters to compare.
 *
 * Return value:
 *   - `0` if the strings are equal up to `n` characters.
 *   - A positive or negative integer representing the difference between the
 *     first differing characters.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((int)((unsigned char)(*s1) - (unsigned char)(*s2)));
		s1++;
		s2++;
		n--;
	}
	return (0);
}

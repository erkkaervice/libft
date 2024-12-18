/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:57:43 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:28:34 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function `f` to each character of the string `s`, and creates
 * a new string resulting from the application of `f`.
 *
 * The function `f` is applied to each character of `s` alongside its index.
 * The output string is allocated dynamically and must be freed by the caller.
 *
 * Parameters:
 *   - s: The string to be iterated over.
 *   - f: The function to be applied to each character and its index.
 *
 * Return value:
 *   - A new string with the transformed characters, or `NULL` if memory 
 * allocation fails
 *     or if either `s` or `f` is `NULL`.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*out;

	i = 0;
	out = ft_newstr(ft_strlen(s));
	if (!s || !f)
		return (NULL);
	if (!out)
		return (NULL);
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}

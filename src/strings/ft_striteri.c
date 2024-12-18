/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:07:18 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:19:45 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_striteri - Applies a function to each character in a string.
 *
 * This function iterates over each character in the string `s` and applies 
 * the function `f` to it. The function `f` receives the index of the character 
 * and a pointer to the character itself. If either `s` or `f` is `NULL`, the 
 * function does nothing.
 *
 * Parameters:
 * - s: The string to iterate over.
 * - f: The function to apply to each character in the string.
 *
 * Returns:
 * - None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}

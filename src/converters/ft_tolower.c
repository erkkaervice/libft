/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:17:45 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:09:33 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_tolower - Converts an uppercase letter to lowercase.
 *
 * This function checks whether the given character is an uppercase letter 
 * (between 'A' and 'Z'). If it is, the function converts it to its lowercase 
 * equivalent by adding the difference between the ASCII values of 'a' and 'A'. 
 * If the character is not an uppercase letter, it is returned unchanged.
 *
 * Parameters:
 * - c: The character to be converted.
 *
 * Returns:
 * - The lowercase equivalent of the character if it is uppercase.
 * - The character itself if it is not uppercase.
 */
int	ft_tolower(int c)
{
	unsigned char	usc;

	usc = (unsigned char)c;
	if (usc >= 'A' && usc <= 'Z')
		return (usc + ('a' - 'A'));
	return (c);
}

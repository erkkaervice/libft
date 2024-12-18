/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:58:26 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:09:55 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_toupper - Converts a lowercase letter to uppercase.
 *
 * This function checks whether the given character is a lowercase letter 
 * (between 'a' and 'z'). If it is, the function converts it to its uppercase 
 * equivalent by subtracting the difference between the ASCII values of 'a' 
 * and 'A'. If the character is not a lowercase letter, it is returned unchanged.
 *
 * Parameters:
 * - c: The character to be converted.
 *
 * Returns:
 * - The uppercase equivalent of the character if it is lowercase.
 * - The character itself if it is not lowercase.
 */
int	ft_toupper(int c)
{
	unsigned char	usc;

	usc = (unsigned char)c;
	if (usc >= 'a' && usc <= 'z')
		return (usc - ('a' - 'A'));
	return (c);
}

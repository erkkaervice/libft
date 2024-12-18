/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:36:15 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:05:16 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isalnum - Checks if a character is alphanumeric.
 *
 * This function determines whether the given character is either a letter 
 * (uppercase or lowercase) or a digit. It uses ASCII value ranges to 
 * evaluate the character:
 * - Uppercase letters: 'A' to 'Z' (65 to 90 in ASCII).
 * - Lowercase letters: 'a' to 'z' (97 to 122 in ASCII).
 * - Digits: '0' to '9' (48 to 57 in ASCII).
 *
 * Parameters:
 * - c: The character to be checked, provided as an integer.
 *
 * Returns:
 * - 1 (true) if the character is alphanumeric.
 * - 0 (false) otherwise.
 */
int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

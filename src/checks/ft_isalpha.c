/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:23:29 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:05:37 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isalpha - Checks if a character is an alphabetic letter.
 *
 * This function evaluates whether the given character is a letter, 
 * either uppercase or lowercase. It uses ASCII value ranges to check 
 * for:
 * - Uppercase letters: 'A' to 'Z' (65 to 90 in ASCII).
 * - Lowercase letters: 'a' to 'z' (97 to 122 in ASCII).
 *
 * Parameters:
 * - c: The character to be checked, provided as an integer.
 *
 * Returns:
 * - 1 (true) if the character is an alphabetic letter.
 * - 0 (false) otherwise.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

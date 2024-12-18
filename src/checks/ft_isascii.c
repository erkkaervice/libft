/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:17:43 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:05:56 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isascii - Checks if a character is part of the ASCII table.
 *
 * This function evaluates whether the given character falls within the 
 * standard 7-bit ASCII range, which includes values from 0 to 127. The 
 * ASCII table represents a wide range of characters, including control 
 * characters, digits, letters, and symbols.
 *
 * Parameters:
 * - c: The character to be checked, provided as an integer.
 *
 * Returns:
 * - 1 (true) if the character is a valid ASCII character.
 * - 0 (false) otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

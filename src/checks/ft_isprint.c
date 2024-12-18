/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:24:09 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:06:56 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isprint - Checks if a character is a printable character.
 *
 * This function verifies whether the given character is a printable 
 * character, as defined by the ASCII table. Printable characters are those 
 * with ASCII values between 32 (' ') and 126 ('~'). This includes letters, 
 * digits, punctuation marks, and space.
 *
 * Parameters:
 * - c: The character to be checked, provided as an integer.
 *
 * Returns:
 * - 1 (true) if the character is a printable character.
 * - 0 (false) otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

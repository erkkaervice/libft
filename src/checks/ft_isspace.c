/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:06:20 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:07:21 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isspace - Checks if a character is a whitespace character.
 *
 * This function determines whether the provided character is considered 
 * a whitespace character. It checks for characters with ASCII values 
 * corresponding to horizontal and vertical tabs (ASCII 9 to 13), 
 * as well as the space character (ASCII 32).
 *
 * Parameters:
 * - c: The character to be checked.
 *
 * Returns:
 * - 1 (true) if the character is a whitespace character.
 * - 0 (false) otherwise.
 */
int	ft_isspace(int c)
{
	return ((c > 8 && c < 14)
		|| (c == 32));
}

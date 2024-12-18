/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:26:00 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:06:13 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isdigit - Checks if a character is a digit.
 *
 * This function determines whether the given character is a numeric 
 * digit by checking if its ASCII value falls within the range for 
 * digits ('0' to '9'), which corresponds to values 48 to 57 in ASCII.
 *
 * Parameters:
 * - c: The character to be checked, provided as an integer.
 *
 * Returns:
 * - 1 (true) if the character is a numeric digit.
 * - 0 (false) otherwise.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

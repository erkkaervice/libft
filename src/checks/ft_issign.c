/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:37:56 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:07:11 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_issign - Checks if a character is a sign ('+' or '-').
 *
 * This function checks if the given character is one of the valid signs used 
 * for indicating positive or negative values: either a plus ('+') or a minus 
 * ('-'). It is often used to detect whether a number is signed.
 *
 * Parameters:
 * - c: The character to be checked.
 *
 * Returns:
 * - 1 (true) if the character is a sign ('+' or '-').
 * - 0 (false) otherwise.
 */
int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

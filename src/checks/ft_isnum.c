/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:21:53 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:06:44 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isnum - Checks if a string represents a valid number.
 *
 * This function verifies whether the input string can be interpreted as an 
 * integer number. It handles optional signs ('+' or '-') and ensures that 
 * all characters after any potential sign are digits.
 * The string must contain only numeric digits (0-9) and may optionally 
 * start with a sign, but it cannot have non-numeric characters.
 *
 * Parameters:
 * - str: The string to be checked.
 *
 * Returns:
 * - 1 (true) if the string represents a valid number (integer).
 * - 0 (false) otherwise.
 */
int	ft_isnum(const char *str)
{
	int	i;

	i = 0;
	if (ft_issign(str[i]) && str[i + 1])
		i++;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	return (str[i] == '\0');
}

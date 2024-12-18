/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:09:47 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:06:29 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isfloat - Checks if a string represents a valid float number.
 *
 * This function verifies if the input string can be interpreted as a valid 
 * floating-point number. It checks for the presence of an optional sign at 
 * the beginning, followed by digits, and ensures that there is at most one 
 * decimal point (dot). It also ensures that the string ends with a digit 
 * after the decimal point, making it a valid float.
 *
 * The function allows for the following:
 * - Optional leading whitespace.
 * - An optional sign ('+' or '-') before the number.
 * - A valid number of digits, with at most one decimal point.
 * 
 * Parameters:
 * - str: The string to be checked.
 *
 * Returns:
 * - true (1) if the string represents a valid float number.
 * - false (0) otherwise.
 */
bool	ft_isfloat(const char *str)
{
	int		i;
	bool	dot;

	i = 0;
	dot = false;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
		i++;
	if (str[i] == '\0')
		return (false);
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (dot)
				return (false);
			dot = true;
		}
		else if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (dot || ft_isdigit(str[i - 1]));
}

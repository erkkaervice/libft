/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:17:32 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:16:48 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atoi - Converts a string to an integer.
 *
 * This function processes the input string by skipping leading whitespace, 
 * handling an optional '+' or '-' sign, and then converting the numeric 
 * part of the string into an integer. It continues until a non-digit character 
 * is encountered, at which point the conversion stops.
 * Note: Overflow is not explicitly checked in this function.
 *
 * Parameters:
 * - str: The string to be converted into an integer.
 *
 * Returns:
 * - The integer representation of the string.
 */
int	ft_atoi(char const *str)
{
	long long int	n;
	int				sign;
	long long int	dig;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		dig = *str - '0';
		n = n * 10 + sign * dig;
		str++;
	}
	return ((int)n);
}

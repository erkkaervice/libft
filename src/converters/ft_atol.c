/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:00:38 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:16:48 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atol - Converts a string to a long integer.
 *
 * This function is similar to `ft_atoi`, but it converts the string to a 
 * `long` integer type. It handles both the sign and overflow concerns, 
 * ensuring that larger values beyond the range of an `int` are processed 
 * correctly. If an overflow is detected, the function returns a value 
 * beyond the standard `int` range, as handled by the underlying logic.
 *
 * Parameters:
 * - str: The string to be converted into a long integer.
 *
 * Returns:
 * - The long integer representation of the string, with overflow handling.
 */
long	ft_atol(char const *str)
{
	long long int	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
		if (n > INT_MAX && sign == 1)
			return (n);
		if (n > (long long)INT_MAX + 1 && sign == -1)
			return (n * sign);
	}
	return ((n * sign));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:34 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:12:05 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atof - Converts a string to a floating point number.
 *
 * This function first skips any leading whitespace, handles an optional sign 
 * (positive or negative), then converts the string to a float by parsing 
 * digits before and after a decimal point.
 *
 * Parameters:
 * - str: The string to be converted.
 *
 * Returns:
 * - The floating point number represented by the string.
 */
double	ft_atof(const char *str)
{
	double	result;
	double	sign;
	double	decimal_factor;

	result = 0.0;
	decimal_factor = 0.1;
	sign = 1.0;
	while (ft_isspace(*str)) str++;
	if (ft_issign(*str)) sign = (*str++ == '-') ? -1.0 : 1.0;
	while (ft_isdigit(*str)) result = result * 10.0 + (*str++ - '0');
	if (*str == '.') str++;
	while (ft_isdigit(*str))
	{
		result += (*str++ - '0') * decimal_factor;
		decimal_factor *= 0.1;
	}
	return (result * sign);
}

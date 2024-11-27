/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:34 by eala-lah          #+#    #+#             */
/*   Updated: 2024/11/27 17:57:54 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	handle_sign_and_whitespace(const char **str)
{
	double	sign;

	sign = 1.0;
	while (**str && ft_isspace(**str))
		(*str)++;
	if (ft_issign(**str))
	{
		if (**str == '-')
			sign = -1.0;
		(*str)++;
	}
	return (sign);
}

double	ft_atof(const char *str)
{
	double	result;
	double	decimal_factor;
	double	sign;

	result = 0.0;
	decimal_factor = 0.1;
	sign = handle_sign_and_whitespace(&str);
	while (ft_isdigit(*str))
	{
		result = result * 10.0 + (*str - '0');
		str++;
	}
	if (*str == '.')
	{
		str++;
		while (ft_isdigit(*str))
		{
			result += (*str - '0') * decimal_factor;
			decimal_factor *= 0.1;
			str++;
		}
	}
	result *= sign;
	return (result);
}

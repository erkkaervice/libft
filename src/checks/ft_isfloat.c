/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:09:47 by eala-lah          #+#    #+#             */
/*   Updated: 2024/11/27 18:10:51 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

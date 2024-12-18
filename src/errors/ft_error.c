/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:23:47 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:18:02 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_error - Outputs an error message and terminates the program.
 *
 * This function takes an error message as input, prints it to the standard 
 * output using `ft_printf`, and then immediately exits the program with a 
 * status code of 1, indicating an error occurred. It is commonly used for 
 * handling fatal errors where the program cannot continue execution.
 *
 * Parameters:
 * - msg: The error message to be printed.
 *
 * Returns:
 * - None. The program will exit before returning.
 */
void	ft_error(char *msg)
{
	ft_printf("%s\n", msg);
	exit(1);
}

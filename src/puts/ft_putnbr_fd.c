/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:32:41 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:13:49 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putnbr_fd - Writes an integer to a given file descriptor.
 *
 * This function writes the integer `n` to the file descriptor `fd` using 
 * recursive calls. If `n` is negative, the function first writes a minus sign, 
 * then converts the absolute value of `n` to a string representation. For 
 * integer values greater than or equal to 10, the function calls itself 
 * recursively to break down the number into smaller parts. Special handling 
 * is provided for `INT_MIN` to avoid overflow.
 *
 * Parameters:
 * - n: The integer to be written.
 * - fd: The file descriptor where the number is written.
 *
 * Returns:
 * - This function does not return any value.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('8', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
	return ;
}

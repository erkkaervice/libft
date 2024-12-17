/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:22:51 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/17 14:44:56 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Includes necessary libraries for the project.
 * - stdarg.h: For handling variable arguments in functions like ft_printf.
 * - unistd.h: Provides write functionality for output.
 * - limits.h: Defines implementation-specific limits for integer types.
 */
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

/* --- Function Prototypes ---
 * Functions responsible for formatted output to stdout.
 */
size_t			nbrlen(int nbr);
int				ft_printchar(char c);
int				ft_printf(const char *str, ...);
int				ft_printhexa(unsigned long n, char format);
int				ft_printmah(void *format);
int				ft_printnbr(int n);
int				ft_printstr(char const *s);
int				ft_printulo(unsigned long n);
char			*ft_strchr(char const *str, int c);
size_t			ft_strlen(const char *str);

#endif

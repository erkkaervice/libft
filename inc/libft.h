/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:09:50 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/09 13:25:59 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Includes necessary libraries for the project.
 * - Limits.h: Defines constants related to system limits (e.g., INT_MAX).
 * - Errno.h: Provides error codes and descriptions for system calls.
 * - Stdlib.h: Includes functions for memory allocation and string manipulation.
 * - Unistd.h: Contains system calls like read and write.
 * - Stdint.h: Defines fixed-width integer types.
 * - Stdbool.h: Provides a boolean type for C.
 */
# include <limits.h>
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdbool.h>

/* --- Check Functions ---
 * Functions for validating different types of characters and data.
 */
int			ft_abs(int n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
bool		ft_isfloat(const char *str);
int			ft_isprint(int c);
int			ft_issign(char c);
int			ft_isspace(int c);

/* --- Converter Functions ---
 * Functions for converting data types and manipulating strings.
 */
double		ft_atof(const char *str);
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
int			ft_tolower(int c);
int			ft_toupper(int c);

/* --- Error Handling ---
 * Function for printing error messages.
 */
void		ft_error(char *msg);

/* --- Get Next Line Function ---
 * Function for reading a line from a file descriptor.
 */
char		*get_next_line(int fd);

/* --- Linked List Functions ---
 * Functions for manipulating linked lists.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

/* --- Memory Functions ---
 * Functions for manipulating memory.
 */
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*ft_free(char **str);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);

/* --- Printf Function ---
 * Function for formatted output to stdout.
 */
int			ft_printf(const char *str, ...);

/* --- Output Functions ---
 * Functions for writing data to file descriptors.
 */
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);

/* --- String Functions ---
 * Functions for manipulating strings.
 */
size_t		ft_nbrlen(int nbr);
char		*ft_newstr(size_t n);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(char const *s, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif

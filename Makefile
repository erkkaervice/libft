# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 17:41:41 by eala-lah          #+#    #+#              #
#    Updated: 2024/12/05 17:20:28 by eala-lah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a

INCS        = -I ./inc/

SRC_DIR     = src/
SRC         = \
	checks/ft_abs.c \
	checks/ft_isalnum.c \
	checks/ft_isalpha.c \
	checks/ft_isascii.c \
	checks/ft_isdigit.c \
	checks/ft_isfloat.c \
	checks/ft_isprint.c \
	checks/ft_issign.c \
	checks/ft_isspace.c \
	converters/ft_atof.c \
	converters/ft_atoi.c \
	converters/ft_itoa.c \
	converters/ft_tolower.c \
	converters/ft_toupper.c \
	errors/ft_error.c \
	getnextline/get_next_line.c \
	lists/ft_lstadd_back_bonus.c \
	lists/ft_lstadd_front_bonus.c \
	lists/ft_lstclear_bonus.c \
	lists/ft_lstdelone_bonus.c \
	lists/ft_lstiter_bonus.c \
	lists/ft_lstlast_bonus.c \
	lists/ft_lstmap_bonus.c \
	lists/ft_lstnew_bonus.c \
	lists/ft_lstsize_bonus.c \
	memories/ft_bzero.c \
	memories/ft_calloc.c \
	memories/ft_free.c \
	memories/ft_memchr.c \
	memories/ft_memcmp.c \
	memories/ft_memcpy.c \
	memories/ft_memmove.c \
	memories/ft_memset.c \
	printf/ft_printchar.c \
	printf/ft_printf.c \
	printf/ft_printhexa.c \
	printf/ft_printmah.c \
	printf/ft_printnbr.c \
	printf/ft_printstr.c \
	printf/ft_printulo.c \
	puts/ft_putchar_fd.c \
	puts/ft_putendl_fd.c \
	puts/ft_putnbr_fd.c \
	puts/ft_putstr_fd.c \
	strings/ft_nbrlen.c \
	strings/ft_newstr.c \
	strings/ft_split.c \
	strings/ft_strchr.c \
	strings/ft_strdup.c \
	strings/ft_striteri.c \
	strings/ft_strjoin.c \
	strings/ft_strlcat.c \
	strings/ft_strlcpy.c \
	strings/ft_strlen.c \
	strings/ft_strmapi.c \
	strings/ft_strncmp.c \
	strings/ft_strnstr.c \
	strings/ft_strrchr.c \
	strings/ft_strtrim.c \
	strings/ft_substr.c \

OBJ_DIR     = obj/
OBJS        = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
OBJ_DIRS    = $(sort $(dir $(OBJS)))

CC          = gcc
CFLAGS      = -Wall -Wextra -Werror $(INCS) -fPIC

AR          = ar rcs
LIB         = ranlib

all: $(OBJ_DIR) $(OBJ_DIRS) $(NAME)

$(OBJ_DIR) $(OBJ_DIRS):
	@mkdir -p $(OBJ_DIRS) 2> /dev/null || { echo "Failed to create object directories." >&2; exit 1; }

$(OBJ_DIR)%.o: $(SRC_DIR)%.c inc/libft.h | $(OBJ_DIR) $(OBJ_DIRS)
	@$(CC) $(CFLAGS) -c $< -o $@ 2> /dev/stderr > /dev/null || { echo "Failed to compile $<." >&2; exit 1; }

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS) 2> /dev/stderr > /dev/null || { echo "Failed to create library $(NAME)." >&2; exit 1; }
	@$(LIB) $(NAME) 2> /dev/stderr > /dev/null || { echo "Failed to ranlib $(NAME)." >&2; exit 1; }

clean:
	@rm -rf $(OBJ_DIR) 2> /dev/null || { echo "Failed to clean object files." >&2; }

fclean: clean
	@rm -f $(NAME) 2> /dev/null || { echo "Failed to remove generated files." >&2; }

re: fclean all

.PHONY: all clean fclean re

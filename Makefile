# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/15 16:29:38 by lotoussa     #+#   ##    ##    #+#        #
#    Updated: 2017/12/20 03:04:52 by lotoussa    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc

CFLAGS = -Werror -Wextra -Wall

NAME = libftprintf.a

D_SRC = src/

D_LIBFT = libft/

HEADER = ft_printf.h

SRC1 = ft_printf.c pf_c.c pf_d.c pf_i.c pf_o.c pf_p.c pf_s.c pf_u.c \
	   pf_x.c pf_upper_c.c pf_upper_d.c pf_upper_o.c pf_upper_s.c \
	   pf_upper_u.c pf_upper_x.c pf_special.c pf_flags.c pf_modif.c \
	   pf_multi.c pf_type.c pf_litoa_base.c pf_luitoa_base.c pf_number.c \
	   pf_string_prec.c pf_string_width.c pf_unicode.c pf_percent.c \
	   pf_hashtag.c pf_invalid_type.c pf_strsub.c

SRC2 = ft_atoi.c ft_memalloc.c ft_putstr.c ft_strcmp.c ft_strdup.c \
	   ft_strjoin.c ft_strlen.c ft_strsub.c ft_bzero.c ft_putchar.c \
	   ft_strcat.c ft_strcpy.c ft_strnew.c ft_strchr.c

SRC_FILL = $(addprefix $(D_SRC), $(SRC1))

SRC_LIB = $(addprefix $(D_LIBFT), $(SRC2))

OBJ = $(SRC_FILL:.c=.o) $(SRC_LIB:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "\033[0;32m$(NAME) created."

./%.o: ./%.c $(HEADER)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@echo "\033[0;32m$@ created."

clean:
	@rm -f $(OBJ)
	@cd libft && $(MAKE) clean
	@echo "\033[0;31mDeleting object files."

fclean: clean
	@rm -f $(NAME)
	@cd libft && $(MAKE) fclean
	@echo "\033[0;31mDeleting $(NAME)."

re: fclean all

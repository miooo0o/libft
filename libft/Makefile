# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minakim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 19:22:56 by minakim           #+#    #+#              #
#    Updated: 2022/12/29 19:22:59 by minakim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CCFLAG = -Wall -Wextra -Werror

AR = ar
ARFLAG = crs

RM = rm -f

INCLUDES = ./libft.h

SRCS =	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
        	ft_isprint.c \
        	ft_strlen.c \
        	ft_memset.c \
        	ft_bzero.c \
        	ft_memcpy.c \
        	ft_memmove.c \
        	ft_strlcpy.c \
        	ft_strlcat.c \
        	ft_toupper.c \
        	ft_tolower.c \
        	ft_strchr.c \
        	ft_strrchr.c \
        	ft_strncmp.c \
        	ft_memchr.c \
        	ft_memcmp.c \
        	ft_strnstr.c \
        	ft_atoi.c \
        	ft_calloc.c \
        	ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
SRCS_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

# sourcefiles to object files
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

# $@ is the name of the target being generated
# $< the first prerequisite (usually a source file).
%.o: %.c
	$(CC) $(CCFLAG) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) ${NAME}

re: fclean all

# $^ Full list of target
$(NAME): $(OBJS)
	$(AR) $(ARFLAG) $@ $^

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAG) $(NAME) $^

.PHONY: all clean fclean re bonus

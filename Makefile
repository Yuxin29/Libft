# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 15:39:14 by yuwu              #+#    #+#              #
#    Updated: 2025/04/28 21:00:15 by yuwu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADERS := libft.h
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRCS_BONUS := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

OBJS := $(SRCS:%.c=%.o)
OBJS_BONUS := $(SRCS_BONUS:%.c=%.o)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	ar -rcs $@ $^
	
all: $(NAME)

bonus: $(NAME) $(NAME_BONUS)
	ar -rcs $(NAME) $(NAME_BONUS)

$(NAME_BONUS): $(OBJS) $(OBJS_BONUS)
	ar -rcs $@ $^

all: $(NAME)

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)

fclear: clean
	@rm -f $(NAME) $(NAME_BONUS)

re: clean all

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
             ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c\
             ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isalpha.c ft_isdigit.c\
             ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c\
             ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c\
        ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c\
        ft_putendl_fd.c ft_putnbr_fd.c
INC   = libft.h
FLAGS  = -Wall -Wextra -Werror
OBJS  = ${SRCS:.c=.o}
NAME  = libft.a
NAME_SO  = libft.so
LIBC  = ar rc
LIBR  = ranlib
GCC    = gcc
RM    = rm -f

.c.o:
	${GCC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:  ${OBJS} ${INC}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all:    ${NAME}

clean:
	${RM} ${OBJS}

fclean:    clean
	${RM} ${NAME} ${NAME_SO}

re:      fclean all

so:
	$(GCC) -c -fPIC $(FLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

.PHONY:    all clean fclean re
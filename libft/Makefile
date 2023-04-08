NAME		= libft.a

SRCS		= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			  ft_atol.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			  ft_printf.c get_next_line_bonus.c

BSRCS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			  ft_lstdelone.c ft_lstclear.c

OBJS		= ${SRCS:.c=.o}

BOBJS		= ${BSRCS:.c=.o}

GCCW		= gcc -Wall -Wextra -Werror

AR			= ar -rc

RM			= rm -f

${NAME}:	${OBJS}
			@${AR} ${NAME} ${OBJS}

${OBJS}:	${SRCS}
			@${GCCW} -c ${SRCS}

${BOBJS}:	${BSRCS}
			@${GCCW} -c ${BSRCS} ${SRCS}

all:		${NAME}

bonus:		${BOBJS} ${OBJS}
			@${AR} ${NAME} ${BOBJS} ${OBJS}

clean:
			@${RM} ${OBJS} ${BOBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus

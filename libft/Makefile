NAME		= libft.a

SRCS		= ft_bzero.c ft_atol.c ft_calloc.c ft_substr.c \
			  ft_split.c ft_printf.c ft_strlen.c ft_putchar_fd.c \
			  ft_free_dbl_ptr.c

BSRCS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			  ft_lstdelone.c ft_lstclear.c ft_lstsndlast.c ft_print_nodes.c

OBJS		= ${SRCS:.c=.o}

BOBJS		= ${BSRCS:.c=.o}

GCCW		= gcc -Wall -Wextra -Werror

AR			= ar -rc

RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			@${AR} ${NAME} ${OBJS}

${OBJS}:	${SRCS}
			@${GCCW} -c ${SRCS}

${BOBJS}:	${BSRCS}
			@${GCCW} -c ${BSRCS} ${SRCS}

bonus:		${BOBJS} ${OBJS}
			@${AR} ${NAME} ${BOBJS} ${OBJS}

clean:
			@${RM} ${OBJS} ${BOBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus

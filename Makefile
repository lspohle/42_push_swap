NAME			= push_swap
				
LIBFT			= libft

SRCDIR			= mandatory

SRCS			= ${addprefix ${SRCDIR}/, main.c \
				  backward.c \
				  checks.c \
				  forward.c \
				  input.c \
				  operations.c \
				  utils_forward.c}

OBJS			= ${SRCS:.c=.o}

CC				= cc

CFLAGS			= -Wall -Wextra -Werror -g

RM				= rm -f

# Colors
GREEN			= \033[92m
YELLOW			= \033[0;33m
BLUE			= \033[0;34m
MAGENTA			= \033[0;35m
ESCAPE			= \033[0m

all:			${NAME}

%.o: %.c		
				@${CC} ${CFLAGS} -c $^ -o $@

${NAME}:		start ${OBJS} ${LIBFT}/libft.a
				@${CC} ${CFLAGS} ${OBJS} -L ${LIBFT} -lft -o ${NAME}
				@echo "${GREEN}******************  COMPILED  *******************${ESCAPE}"
				@echo "${MAGENTA}*************** You got this, guys! *************${ESCAPE}"

${LIBFT}/libft.a:
				@make bonus -C ${LIBFT}		



start:			
				@echo "-------------------------------------------------"
				@echo "${MAGENTA}******************  MANDATORY  ******************${ESCAPE}"
				@echo "-------------------------------------------------"
				@echo "${YELLOW}******************  COMPILING  ******************${ESCAPE}"

clean:	
				@${RM} ${OBJS}
				@make clean -C ${LIBFT}
				@echo "${GREEN}*******************  CLEANED  *******************${ESCAPE}"

fclean:			clean
				@${RM} ${NAME}
				@make fclean -C ${LIBFT}

re:				fclean all

.PHONY:			all start clean fclean re
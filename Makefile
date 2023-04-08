NAME			= push_swap
				
LIBFT			= libft

SRCDIR			= mandatory

SRCS			= ${addprefix ${SRCDIR}/, main.c \
				  input.c \
				  print.c \
				  push.c \
				  reverse_rotate.c \
				  rotate.c \
				  swap.c \
				  algo_back.c \
				  algo_forward.c \
				  checks.c}


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

%.o: %.c		
				@${CC} ${CFLAGS} -c $^ -o $@

${NAME}:		start ${OBJS} ${LIBFT}/libft.a
				@${CC} ${CFLAGS} ${OBJS} -L ${LIBFT} -lft -o ${NAME}
				@echo "${GREEN}******************  COMPILED  *******************${ESCAPE}"
				@echo "${MAGENTA}*************** You got this, guys! *************${ESCAPE}"

${LIBFT}/libft.a:
				@make bonus -C ${LIBFT}		

all:			${NAME}

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
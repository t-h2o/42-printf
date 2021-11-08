SRCS		= main.c

OBJS	= ${SRCS:.c=.o}

HEADER	= libft.h

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

NAME	= pass 

RM		= rm -f

LIB		= -L. -lftprintf -lft


.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	cp ../libftprintf.a ./
	${CC} ${FLAGS} -o ${NAME} ${OBJS} ${LIB}

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:			fclean	all

log:
	git log --graph --oneline

norm:
	norminette ${SRCS}
	norminette -RCheckDefine ${HEADER}

.PHONY: all clean fclean re bonus so

SRCS		=	main.c \
				test_c.c test_s.c \
				test_p.c test_d.c \
				test_u.c test_x.c \
				test_X.c test_5.c



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
	cp ../libft/libft.a ./
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

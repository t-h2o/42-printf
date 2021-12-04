SRCS		=	main.c \
				test_c.c test_s.c \
				test_p.c test_d.c \
				test_u.c test_x.c \
				test_xx.c test_5.c



OBJS	= ${SRCS:.c=.o}

H_DIR	=	./../headers/
HEADER	= libftprintf.h

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

NAME	= pass 

RM		= rm -f

LIB		= -L. -lftprintf


.c.o:
	${CC} ${FLAGS} -I ${H_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	make -C ./.. 
	cp ../libftprintf.a ./
	${CC} ${FLAGS} -o ${NAME} ${OBJS} ${LIB}

all:		${NAME}

clean:
	make clean -C ./.. 
	${RM} ${OBJS}

fclean:		clean
	make fclean -C ./.. 
	${RM} ${NAME}

re:			fclean	all
	make re -C ./.. 

log:
	make log -C ./..

norm:
	make norm -C ./..

.PHONY: all clean fclean re bonus so

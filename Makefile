NAME	=	libftprintf.a


#	Compilation setting

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror


#	Directories

DIR_SRC	=	./srcs
DIR_OBJ	=	./objs
DIR_INC	=	./headers/


#	Sources

SRCS	=	${DIR_SRC}/pf_printf.c	\
			${DIR_SRC}/pf_putnbr.c	\
			${DIR_SRC}/pf_putadd.c	\
			${DIR_SRC}/pf_putstr.c


OBJS	=	${addprefix ${DIR_OBJ}/, ${notdir ${SRCS:.c=.o}}}

HEADER	=	${DIR_INC}libftprintf.h

RM		=	rm -f


vpath %.c ${DIR_SRC}


all : ${NAME}


${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

${DIR_OBJ}/%.o : %.c | ${DIR_OBJ}
	${CC} ${CFLAGS} -I ${DIR_INC} -o $@ -c $^

${DIR_OBJ} :
	@mkdir -p ${DIR_OBJ}


clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

log:
	git log --graph --oneline

norm:
	norminette ${SRCS}
	norminette ${HEADER}

.PHONY: all clean fclean re bonus so

SRCS_PATH	= ./srcs/

NAME	=	libftprintf.a

SRCS	=	${SRCS_PATH}pf_printf.c \
			${SRCS_PATH}pf_putnbr.c \
			${SRCS_PATH}pf_putstr.c

HEADER_DIR	=	./headers/
HEADER	=	libftprintf.h

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f


.c.o:
	${CC} ${FLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS} 
	ranlib ${NAME}

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
	norminette ${HEADER}

.PHONY: all clean fclean re bonus so

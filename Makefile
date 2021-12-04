SRCS_PATH	= ./srcs/

SRCS	=	${SRCS_PATH}pf_printf.c \
			${SRCS_PATH}pf_putnbr.c \
			${SRCS_PATH}pf_putstr.c

OBJS	=	${SRCS:.c=.o}

HEADER	=	libft.h libftprintf.h

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

RM		=	rm -f


.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

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
	norminette libft/
	norminette ${SRCS}
	norminette ${HEADER}

.PHONY: all clean fclean re bonus so

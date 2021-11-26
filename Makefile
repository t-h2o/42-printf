SRCS_PATH	= ./srcs/

SRCS	=	${SRCS_PATH}ft_printf.c \
			${SRCS_PATH}ft_puthex.c \
			${SRCS_PATH}ft_putdec.c \
			${SRCS_PATH}ft_putstr.c \
			${SRCS_PATH}ft_putchar.c

OBJS	=	${SRCS:.c=.o}

HEADER	=	libft.h

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
	norminette ${SRCS}
	norminette -RCheckDefine ${HEADER}

.PHONY: all clean fclean re bonus so

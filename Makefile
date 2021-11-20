SRCS	= ft_printf.c ft_puthex.c ft_putdec.c ft_putstr.c ft_putchar.c

OBJS	= ${SRCS:.c=.o}

HEADER	= libft.h

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a

RM		= rm -f


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

#include	"./libftprintf.h"
#include	"./libft.h"
#include	<stdio.h>

void foo(char *fmt, ...)
{
	va_list	ap;
	int		d;
	char	c, *s;

	va_start(ap, fmt);
	while (*fmt)
	{
		printf("fmt :%c\n", *fmt);
		switch(*fmt++) {
		case 's':                       /* string */
			s = va_arg(ap, char *);
			printf("string %s\n", s);
			break;
		case 'd':                       /* int */
			d = va_arg(ap, int);
			printf("int %d\n", d);
            break;
		case 'c':                       /* char */
			/* Note: char is promoted to int. */
			c = va_arg(ap, int);
			printf("char %c\n", c);
			break;
		}
	}
	va_end(ap);
    /* use ap2 to iterate over the arguments again */
}



void
	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		prec;
	int		ten;
	int		n;
	
	va_start(arg, s);

	while (*s)
	{
		if (*s == '%')
		{
			prec = 0;
			s++;
			if (*s == '.')
				{
					prec = ft_atoi(++s);
					ten = 1;
					while (prec >= (ten - 1))
					{
						ten *= 10;
						s++;
					}
				}
			if (*s == 'd')
			{
				ten = 1;
				while (prec--)
					ten *= 10;
				n = va_arg(arg, int);
				while (ten > n)
				{
					ft_putchar_fd('0', 1);
					ten /= 10;
				}
				ft_putnbr_fd(n, 1);
			}
			if (*s == 's')
			{
				char *s = va_arg(arg, char *);
				ft_putstr_fd(s, 1);
			}
		}
		else
		{
			ft_putchar_fd(*s, 1);
		}
		s++;
	}
}

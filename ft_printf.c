#include	"./libftprintf.h"
#include	"./libft.h"
#include	<stdio.h>

void foo(char *fmt, ...)
{
	va_list ap;
	int d;
	char c, *s;

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

	va_start(arg, s);

	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'd')
			{
				int n = va_arg(arg, int);
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

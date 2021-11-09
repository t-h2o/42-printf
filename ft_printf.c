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

int
	ft_intlen(int nbr)
{
	size_t	n;
	int		c;

	c = 1;
	if (nbr < 0)
		c++;
	if (nbr < 0)
		n = (size_t) - nbr;
	else
		n = (size_t) nbr;
	while ( n > 10)
	{
		n /= 10;
		c++;
	}
//	printf("\nnb : %d\tintlen : %d\n", nbr, c);
	return (c);
}

int
	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		prec;
	int		ten;
	int		len;
	int		n;
	int		sum;
	char	*str;

	va_start(arg, s);
	
	sum = 0;
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
					while (prec / ten > 0)
					{
						ten *= 10;
						s++;
					}
					if (prec == 0)
						s++;
				}
			if (*s == 'd')
			{
				n = va_arg(arg, int);
				len = ft_intlen(n);
				if (len > prec)
					sum += len;
				else
					sum += prec;
				while (prec-- > len)
					ft_putchar_fd('0', 1);
				ft_putnbr_fd(n, 1);
			}
			if (*s == 's')
			{
				str = va_arg(arg, char *);
				sum += ft_strlen(str);
				ft_putstr_fd(str, 1);
			}
			if (*s == '%')
			{
				sum++;
				ft_putchar_fd('%', 1);
			}
		}
		else
		{
			sum++;
			ft_putchar_fd(*s, 1);
		}
		s++;
	}

	return (sum);
}

#include	"./libftprintf.h"
#include	"./libft.h"

#include	<stdio.h>

const char
	*ft_precision(const char *s, int *prec)
{
	int	ten;

	*prec = ft_atoi(++s);
	ten = 1;
	while ((1 + *prec) / ten > 0)
	{
		ten *= 10;
		s++;
//		printf ("\nprecision %d et s : %c\n", *prec, *s);
	}
//	printf ("\nprecision %d et s : %c\n", *prec, *s);
//	if (prec == 0)
//		s++;
//	printf ("\nprecision %d et s : %c\n", *prec, *s);
	return (s);
}

int
	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		prec;
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
			prec = -1;
			s++;
			if (*s == '.')
					s = ft_precision(s, &prec);
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
				ft_putdec(n);
			}
			if (*s == 's')
			{	
				str = va_arg(arg, char *);
				sum += ft_putstr(str, prec);
			}
			if (*s == 'c')
				sum += ft_putchar(va_arg(arg, int));
			if (*s == 'x')
			{
				long ptr = (long)va_arg(arg, int);
				sum += ft_puthex(ptr);
			}
			if (*s == 'p')
			{
				long ptr = va_arg(arg, long);
				ft_putstr_fd("0x", 1);
				ft_puthex(ptr);
			}
			if (*s == '%')
				sum += ft_putchar('%');
		}
		else
			sum += ft_putchar(*s);
		s++;
	}
	va_end(arg);
	return (sum);
}

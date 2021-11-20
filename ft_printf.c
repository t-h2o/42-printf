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
	}
	return (s);
}

int
	ft_flags(const char *s, va_list *arg)
{
	int		prec;
	int		sum;
	int		n;
	char	*str;

	sum = 0;
	prec = -1;
	if (*s == '.')
			s = ft_precision(s, &prec);
	if (*s == 'l')
		s++;
	if (*s == 'd' || *s == 'i')
	{
		n = va_arg(*arg, int);
		sum += ft_putdec((long)n, prec);
	}
	if (*s == 'u')
	{
		sum += ft_putdec((long) (va_arg(*arg, unsigned int)), prec);
	}
	if (*s == 's')
	{	
		str = va_arg(*arg, char *);
		sum += ft_putstr(str, prec);
	}
	if (*s == 'c')
		sum += ft_putchar(va_arg(*arg, int));
	if (*s == 'x')
	{
		long ptr = (long)va_arg(*arg, int);
		sum += ft_puthex(ptr);
	}
	if (*s == 'p')
	{
		long ptr = va_arg(*arg, long);
		ft_putstr_fd("0x", 1);
		ft_puthex(ptr);
	}
	if (*s == '%')
		sum += ft_putchar('%');
	return (sum);
}

int
	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		sum;

	va_start(arg, s);
	
	sum = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			sum += ft_flags(s, &arg);
		}
		else
			sum += ft_putchar(*s);
		s++;
	}
	va_end(arg);
	return (sum);
}

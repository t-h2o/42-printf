#include	"./libftprintf.h"
#include	"./libft.h"

#include	<stdio.h>

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
			prec = -1;
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
			if (*s == 'l')
			{
				s++;
				if (*s == 'x')
				{
					
				}
			}
			if (*s == 'd')
			{
				if (prec == -1)
					prec = 0;
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
				if (prec >= 0)
					str = ft_substr(str, 0, prec);
				sum += ft_strlen(str);
				ft_putstr_fd(str, 1);
			}
			if (*s == 'c')
			{
				n = va_arg(arg, int);
				sum++;
				ft_putchar_fd(n, 1);
			}
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
			{
				sum += ft_putchar('%');
			}
			
		}
		else
		{
			sum += ft_putchar(*s);
		}
		s++;
	}
	va_end(arg);
	return (sum);
}

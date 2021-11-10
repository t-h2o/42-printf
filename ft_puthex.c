#include	"./libft.h"
#include	"./libftprintf.h"

long
	ft_convhex(long n)
{
	if (n < 10)
		n = n + '0';
	else
		n = (n - 10) + 'a';
	return (n);
}

void
	ft_write_hex(long n)
{
	if (n > 16)
	{
		ft_puthex(n / 16);	
		ft_puthex(n % 16);	
	}
	else
	{
		n = ft_convhex(n);
		ft_putchar_fd(n, 1);
	}
}

int
	ft_puthex(long nbr)
{
	ft_write_hex(nbr);
	
	size_t	n;
	int		c;

	c = 1;
	if (nbr < 0)
		c++;
	if (nbr < 0)
		n = (size_t) - nbr;
	else
		n = (size_t) nbr;
	while ( n > 16)
	{
		n /= 16;
		c++;
	}
	return (c);
}

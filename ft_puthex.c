#include	"./libft.h"
#include	"./libftprintf.h"

static int
	ft_convhex(int n)
{
	if (n < 10)
		n = n + '0';
	else
		n = (n - 10) + 'a';
	return (n);
}

static void
	ft_write_hex(long n)
{
	char	c;

	if (n > 16)
	{
		ft_puthex(n / 16);	
		ft_puthex(n % 16);	
	}
	else
	{
		c = ft_convhex((int) n);
		ft_putchar_fd(c, 1);
	}
}

int
	ft_puthex(long nbr)
{
	if (nbr < 0)
		nbr = FT_U_32B_MAX + nbr + 1;
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

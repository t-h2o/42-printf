#include	"../libft.h"
#include	"../libftprintf.h"

int
	ft_putchar(int n)
{
	ft_putchar_fd(n, 1);
	return (1);
}

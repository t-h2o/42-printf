#include	"./libft.h"
#include	"./libftprintf.h"

int
	ft_putstr(char *strtoprint)
{
	ft_putstr_fd(strtoprint, 1);
	return (ft_strlen(strtoprint));
}

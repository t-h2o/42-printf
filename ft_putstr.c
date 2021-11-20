#include	"./libft.h"
#include	"./libftprintf.h"

int
	ft_putstr(char *strtoprint, int prec)
{
	if (prec >= 0)
		strtoprint = ft_substr(strtoprint, 0, prec);
	ft_putstr_fd(strtoprint, 1);
	return (ft_strlen(strtoprint));
}

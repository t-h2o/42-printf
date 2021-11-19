#ifndef		LIBFTPRINTF_H 
# define	LIBFTPRINTF_H
# include	<stdarg.h>

int		ft_putstr(char *strtoprint, int prec);
int		ft_printf(const char *s, ...);
int		ft_intlen(long nbr);
int		ft_putchar(int n);

int		ft_puthex(long n);
int		ft_putdec(long n, int prec);
void	foo(char *fmt, ...);

#endif	/* LIBFTPRINTF_H */

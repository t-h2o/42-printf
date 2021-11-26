#ifndef		LIBFTPRINTF_H 
# define	LIBFTPRINTF_H
# include	<stdarg.h>
# include	<stdio.h>

int		ft_putstr(char *strtoprint);
int		ft_printf(const char *s, ...);
int		ft_intlen(long nbr);
int		ft_putchar(int n);

int		ft_puthex(unsigned long n, int maj);
int		ft_putdec(long n);
void	foo(char *fmt, ...);

#endif	/* LIBFTPRINTF_H */

#ifndef		LIBFTPRINTF_H 
# define	LIBFTPRINTF_H
# include	<stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(int n);
int		ft_puthex(long n);
int		ft_putdec(int n);
void	foo(char *fmt, ...);

#endif	/* LIBFTPRINTF_H */

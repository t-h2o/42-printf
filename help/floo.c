# include	<stdarg.h>
#include	<stdio.h>

static void
	ft_flags(char *fmt, va_list *ap)
{
	int		d;
	char	c, *s;

	printf("fmt :%c\n", *fmt);
	switch(*fmt) {
	case 's':                       /* string */
		s = va_arg(*ap, char *);
		printf("string %s\n", s);
		break;
	case 'd':                       /* int */
		d = va_arg(*ap, int);
		printf("int %d\n", d);
           break;
	case 'c':                       /* char */
		/* Note: char is promoted to int. */
		c = va_arg(*ap, int);
		printf("char %c\n", c);
		break;
	}

}

static void foo(char *fmt, ...)
{
	va_list	ap;

	va_start(ap, fmt);
	while (*fmt)
	{
		ft_flags(fmt, &ap);
		*fmt++;
	}
	va_end(ap);
}

int
	main(void)
{
	foo("sdc", "pol", 42, 'x');
	return (0);
}

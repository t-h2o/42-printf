#include	"../libftprintf.h"
#include	"../libft.h"
#include	<stdio.h>

void	printf_nbr();
void	printf_str();

int
	main(void)
{
	printf("\n\n\tTEST PRINTF\n\n");

	int	n;
	
	n = printf("5 %% 2 = %c", '1');	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("5 %% 2 = %c", '1');	
	printf("\t%.2d\tchar\n\n", n);	

	printf_str();	

	printf_nbr();	

	return (0);
}


void
	printf_str(void)
{
	int		n;

	char	str[] = "ILoveMyWork";
	
	n = printf("str : %s", str);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("str : %s", str);	
	printf("\t%.2d\tchar\n\n", n);	

}


void
	printf_nbr(void)
{
	int				n;
	
	int				i = FT_32B_MAX;
	unsigned int	ui = FT_U_32B_MAX;
	long			l = FT_64B_MAX;
	unsigned long	ul = FT_U_64B_MAX;

//	INT

	// DECIMAL

	n = printf("int\t\t%d", i);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("int\t\t%d", i);	
	printf("\t%.2d\tchar\n\n", n);	
	

	// HEXADECIMAL

	n = printf("int\t\t%x", i);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("int\t\t%x", i);	
	printf("\t%.2d\tchar\n\n", n);	


// UNSIGNED INT

	//	DECIMAL

	n = printf("unsigned int\t%u", ui);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("unsigned int\t%u", ui);	
	printf("\t%.2d\tchar\n\n", n);	


	// HEXADECIMAL

	n = printf("unsigned int\t%x", ui);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("unsigned int\t%x", ui);	
	printf("\t%.2d\tchar\n\n", n);	


// LONG

	// DECIMAL

	n = printf("long\t\t%ld", l);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("long\t\t%ld", l);	
	printf("\t%.2d\tchar\n\n", n);	


	// HEXADECIMAL

	n = printf("long\t\t%lx", l);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("long\t\t%lx", l);	
	printf("\t%.2d\tchar\n\n", n);	


// UNSIGNED LONG

	// DECIMAL

	n = printf("unsigned long\t%lu", ul);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("unsigned long\t%lu", ul);	
	printf("\t%.2d\tchar\n\n", n);	


	// HEXADECIMAL

	n = printf("unsigned long\t%lx", ul);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("unsigned long\t%lx", ul);	
	printf("\t%.2d\tchar\n\n", n);	
}


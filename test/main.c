#include	"./test.h"
#include	"../libftprintf.h"
#include	"../libft.h"
#include	<stdio.h>

void	printf_nbr();
void	printf_str();

int
	main(void)
{
	test_c();
	test_s();
	test_p();
	test_d();
	test_u();
	test_x();
	test_X();
	test_5();
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


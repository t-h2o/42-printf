#include	"./test.h"

void
	test_s(void)
{
	int		n;

	char	str[] = "ILoveMyWork\n";

printf("\n- - - - - - - - - -\n");
printf("\t%%s");
printf("\n- - - - - - - - - -\n");	

n = printf("str : %s", str);	
	printf("%.2d char printed\n", n);	
	n = ft_printf("str : %s", str);	
	printf("%.2d char\n\n", n);	
	
	n = printf("str : %s", "");	
	printf("%.2d char printed\n", n);	
	n = ft_printf("str : %s", "");	
	printf("%.2d char\n\n", n);	

	char	*nul = 0;

	n = printf("pointeur de 0 : %s\n", nul);	
	printf("%.2d char printed\n", n);	
	n = ft_printf("pointeur de 0 : %s\n", nul);	
	printf("%.2d char\n\n", n);	
}



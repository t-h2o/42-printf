#include	"./test.h"

void
	test_s(void)
{
	int		n;

	char	str[] = "ILoveMyWork\n";
	
	n = printf("str : %s", str);	
	printf("%.2d char printed\n", n);	
	n = ft_printf("str : %s", str);	
	printf("%.2d char\n\n", n);	
	
	n = printf("str : %s", "");	
	printf("%.2d char printed\n", n);	
	n = ft_printf("str : %s", "");	
	printf("%.2d char\n\n", n);	

}



#include	"./test.h"

void
	test_x(void)
{
	unsigned int	n;
	int				sum;
	
	printf("\n- - - - - - - - - -\n");
	printf("\t%%x");
	printf("\n- - - - - - - - - -\n");
	
	n = 0;
	sum = printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n\n", sum);

	n = 16;
	sum = printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MAX;
	sum = printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_U_32B_MAX;
	sum = printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MIN;
	sum = printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %x\n", n);
	printf("%d char printed\n\n", sum);

}

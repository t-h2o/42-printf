#include	"./test.h"

void
	test_xx(void)
{
	unsigned int	n;
	int				sum;

	n = 0;
	sum = printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n\n", sum);

	n = 15;
	sum = printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MAX;
	sum = printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_U_32B_MAX;
	sum = printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MIN;
	sum = printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("petit hexadecimal : %X\n", n);
	printf("%d char printed\n\n", sum);

}

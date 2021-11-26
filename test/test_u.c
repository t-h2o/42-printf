#include	"./test.h"

void
	test_u(void)
{
	unsigned int	n;
	int				sum;

	n = 15;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);

	n = 0;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);

	n = -18;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MAX;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_U_32B_MAX;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);

/*	n = FT_64B_MAX;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_U_64B_MAX;
	sum = printf("unsigned int : %u\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("unsigned int : %u\n", n);
	printf("%d char printed\n\n", sum);
*/
}

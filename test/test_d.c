#include	"./test.h"

void
	test_d(void)
{
	int	n;
	int	sum;

	n = 15;
	sum = printf("int : %d\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("int : %d\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MAX;
	sum = printf("int : %d\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("int : %d\n", n);
	printf("%d char printed\n\n", sum);

	n = FT_32B_MIN;
	sum = printf("int : %d\n", n);
	printf("%d char printed\n", sum);
	sum = ft_printf("int : %d\n", n);
	printf("%d char printed\n\n", sum);
}

#include	"./test.h"

void
	test_d(void)
{
	int	n;
	int	sum;

	printf("\n- - - - - - - - - -\n");
	printf("\t%%d || %%i");
	printf("\n- - - - - - - - - -\n");

	n = 10;
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

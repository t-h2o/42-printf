#include	"./test.h"

void
	test_5(void)
{
	int		sum;

	sum = printf("%%\n");
	printf("%d char printed\n", sum);
	sum = ft_printf("%%\n");
	printf("%d char printed\n\n", sum);

}

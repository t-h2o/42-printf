#include	"./test.h"

void
	test_p(void)
{
	int	n;
	int	sum;

	sum = printf("pointer %p\n", &n);
	printf("%d char printed\n", sum);
	sum = ft_printf("pointer %p\n", &n);
	printf("%d char printed\n\n", sum);
}

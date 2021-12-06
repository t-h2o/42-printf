#include	"./test.h"

void
	test_p(void)
{
	int	n;
	int	sum;

	printf("\n- - - - - - - - - -\n");
	printf("\t%%p");
	printf("\n- - - - - - - - - -\n");

	sum = printf("pointer %p\n", &n);
	printf("%d char printed\n", sum);
	sum = ft_printf("pointer %p\n", &n);
	printf("%d char printed\n\n", sum);
}

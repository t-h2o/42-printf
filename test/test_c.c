#include	"./test.h"

void
	test_c(void)
{
	char	c = 'c';
	int		sum;

	sum = printf("char : %c\n", c);
	printf("%d char printed\n", sum);
	sum = ft_printf("char : %c\n", c);
	printf("%d char printed\n\n", sum);

}

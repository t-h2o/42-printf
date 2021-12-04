#include	"../libftprintf.h"
#include	<stdio.h>

# define FT_32B_MAX		2147483647
# define FT_32B_MIN		-2147483648
# define FT_U_32B_MAX	4294967295
# define FT_64B_MAX		9223372036854775807
# define FT_64B_MIN		-9223372036854775808
# define FT_U_64B_MAX	1744674407370955161

void	test_c(void);
void	test_s(void);
void	test_p(void);
void	test_d(void);
void	test_u(void);
void	test_x(void);
void	test_xx(void);
void	test_5(void);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:14:36 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/09 15:11:06 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"
#include	"../libft.h"
#include	<stdio.h>

int
	main(void)
{
	printf("\n\n\tTEST PRINTF\n\n");

	int	n;
	
	n = printf("Buya %.0d...", 42);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("Buya %.0d...", 42);	
	printf("\t%.2d\tchar\n\n", n);	
	
	n = printf("Buya %.5d...", 42);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("Buya %.5d...", 42);	
	printf("\t%.2d\tchar\n\n", n);	
	
	n = printf("Buya %.51d...", 42);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("Buya %.51d...", 42);	
	printf("\t%.2d\tchar\n\n", n);	
	
	n = printf("Buya %.3d...", 4212345);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("Buya %.3d...", 4212345);	
	printf("\t%.2d\tchar\n\n", n);	
	
	n = printf("Buya %.3s...", "abeille");	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("Buya %.3s...", "abeille");	
	printf("\t%.2d\tchar\n\n", n);	
		
		
	printf("\n\n\tE N D\n\n");

//	foo("dscc", 42, "ffooo test", 'c', 'a');
	
	return (0);
}

/*		42	prec	3
 *		042
 *
 *		ten = 100; (10 ^ 2)
 *		while (ten > n
 */

/*		12
 *		42 ~ 2 char
 *		10 0 + 42
 */

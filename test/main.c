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

void
	printf_nbr(void)
{
	int				n;
	
	int				i = FT_32B_MAX;
	unsigned int	ui = FT_U_32B_MAX;
	long			l = FT_64B_MAX;
	unsigned long	ul = FT_U_64B_MAX;

//	INT

	// DECIMAL

	n = printf("int\t\t%d", i);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("int\t\t%d", i);	
	printf("\t%.2d\tchar\n\n", n);	
	

	// HEXADECIMAL

	n = printf("int\t\t%x", i);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("int\t\t%x", i);	
	printf("\t%.2d\tchar\n\n", n);	


// UNSIGNED INT

	//	DECIMAL

	n = printf("unsigned int\t%u", ui);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("unsigned int\t%u", ui);	
	printf("\t%.2d\tchar\n\n", n);	


	// HEXADECIMAL

	n = printf("unsigned int\t%x", ui);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("unsigned int\t%x", ui);	
	printf("\t%.2d\tchar\n\n", n);	


// LONG

	// DECIMAL

	n = printf("long\t\t%ld", l);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("long\t\t%ld", l);	
	printf("\t%.2d\tchar\n\n", n);	


	// HEXADECIMAL

	n = printf("long\t\t%lx", l);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("long\t\t%lx", l);	
	printf("\t%.2d\tchar\n\n", n);	


// UNSIGNED LONG

	// DECIMAL

	n = printf("unsigned long\t%lu", ul);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("unsigned long\t%lu", ul);	
	printf("\t%.2d\tchar\n\n", n);	


	// HEXADECIMAL

	n = printf("unsigned long\t%lx", ul);	
	printf("\t%.2d\tchar\n", n);	
	n = printf("unsigned long\t%lx", ul);	
	printf("\t%.2d\tchar\n\n", n);	
}

int
	main(void)
{
	printf("\n\n\tTEST PRINTF\n\n");

	int	n;
	
	n = printf("Buya %.0d...", 42);	
	printf("\t%.2d\tchar\n", n);	
	n = ft_printf("Buya %.0d...", 42);	
	printf("\t%.2d\tchar\n\n", n);	
	
	printf_nbr();	
	return (0);
}

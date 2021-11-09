/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:14:36 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/08 18:14:42 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"
#include	"../libft.h"
#include	<stdio.h>

int
	main(void)
{
	printf("\n\n\tTEST PRINTF\n\n");

	printf("\tprintf : \n\n");

	printf("Buya %.3d \n", 42);	
	printf("Buya %.12d \n", 42);	
	printf("Buya %.3d \n", 42123);	
	
	printf("\n\tft_printf : \n\n");
	
	ft_printf("Buya %.3d \n", 42);	
	ft_printf("Buya %.12d \n", 42);	
	ft_printf("Buya %.3d \n", 42123);	
	
	printf("\n\n");
	ft_printf("Buya %s \n", "[string add...]");	

	printf("\n\n\tE N D\n\n");

//	foo("dscc", 42, "ffooo test", 'c', 'a');
	
	return (0);
}

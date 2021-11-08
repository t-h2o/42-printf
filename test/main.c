/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:14:36 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/08 17:05:58 by tgrivel          ###   ########.fr       */
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
	printf("Buya\n");	
	
	printf("\tft_printf : \n\n");
	ft_printf("Buya\n");	

	printf("\n\n\tE N D\n\n");

	foo("foo test", 42, "ffooo test", 'c', 'a');
	
	return (0);
}

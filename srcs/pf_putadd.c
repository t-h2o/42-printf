/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:00:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/12/07 14:43:34 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

static void
	ft_write_hex(unsigned long n)
{
	char	c;

	if (n >= 16)
	{
		ft_write_hex(n / 16);
		ft_write_hex(n % 16);
	}
	else
	{
		c = (char)n;
		if (c < 10)
			c = c + '0';
		else
			c = (c - 10) + 'a';
		pf_putchar(c);
	}
}

int
	pf_putadd(unsigned long n)
{
	int		c;

	ft_write_hex(n);
	c = 1;
	while (n >= 16)
	{
		n /= 16;
		c++;
	}
	return (c);
}

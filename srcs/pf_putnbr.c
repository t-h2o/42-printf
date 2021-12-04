/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:00:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/30 12:45:02 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"

static void
	ft_write_hex(unsigned long long n, int maj)
{
	char	c;
	char	ref;

	if (n > 16)
	{
		ft_write_hex(n / 16, maj);
		ft_write_hex(n % 16, maj);
	}
	else
	{
		c = (char)n;
		if (maj)
			ref = 'A';
		else
			ref = 'a';
		if (c < 10)
			c = c + '0';
		else
			c = (c - 10) + ref;
		pf_putchar(c);
	}
}

static void
	ft_write_nbr(long n)
{
	if (n < 0)
	{
		pf_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_write_nbr(n / 10);
		ft_write_nbr(n % 10);
	}
	else
		pf_putchar((int)n + '0');
}

int
	pf_putdec(long nbr)
{
	size_t	n;
	int		c;

	ft_write_nbr(nbr);
	c = 1;
	if (nbr < 0)
		c++;
	if (nbr < 0)
		n = (size_t) - nbr;
	else
		n = (size_t) nbr;
	while (n > 10)
	{
		n /= 10;
		c++;
	}
	return (c);
}

int
	pf_puthex(unsigned long long n, int maj)
{
	int		c;

	ft_write_hex(n, maj);
	c = 1;
	while (n > 16)
	{
		n /= 16;
		c++;
	}
	return (c);
}

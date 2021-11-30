/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:50:21 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/26 15:50:57 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libft.h"
#include	"../libftprintf.h"

static int
	ft_convhex(int n, int maj)
{
	char	ref;

	if (maj)
		ref = 'A';
	else
		ref = 'a';
	if (n < 10)
		n = n + '0';
	else
		n = (n - 10) + ref;
	return (n);
}

static void
	ft_write_hex(long n, int maj)
{
	char	c;

	if (n > 16)
	{
		ft_write_hex(n / 16, maj);
		ft_write_hex(n % 16, maj);
	}
	else
	{
		c = ft_convhex((int) n, maj);
		ft_putchar_fd(c, 1);
	}
}

int
	ft_puthex(unsigned long n, int maj)
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

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

#include	"../libft.h"
#include	"../libftprintf.h"

static void
	ft_write_nbr(long n)
{
	int	fd;

	fd = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_write_nbr(n / 10);
		ft_write_nbr(n % 10);
	}
	else
		ft_putchar_fd((int)n + '0', fd);
}

int
	ft_intlen(long nbr)
{
	size_t	n;
	int		c;

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
	ft_putdec(long n)
{
	int	sum;

	sum = ft_intlen(n);
	ft_write_nbr(n);
	return (sum);
}

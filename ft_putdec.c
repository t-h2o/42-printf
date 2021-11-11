/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:00:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/05 18:43:34 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"./libft.h"
#include	"./libftprintf.h"

void
	ft_write_nbr(int n)
{
	int	fd = 1;

	if (n == FT_32B_MIN)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}

}

int
	ft_intlen(int nbr)
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
	while ( n > 10)
	{
		n /= 10;
		c++;
	}
	return (c);
}


int
	ft_putdec(int nbr)
{
	ft_write_nbr(nbr);
	
	return (ft_intlen(nbr));
}

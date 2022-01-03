/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:51:06 by tgrivel           #+#    #+#             */
/*   Updated: 2022/01/03 14:16:02 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

int
	pf_putchar(int n)
{
	char	c;

	c = n;
	write(1, &c, 1);
	return (1);
}

int
	pf_putstr(char *s)
{
	int	i;

	if (!s)
		return (pf_putstr("(null)"));
	i = -1;
	while (s[++i])
		pf_putchar(s[i]);
	return (i);
}

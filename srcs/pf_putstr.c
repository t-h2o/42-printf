/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:51:06 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/26 15:51:09 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"

static int
	pf_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

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
		return (0);
	i = -1;
	while (s[++i])
		pf_putchar(s[i]);
	return (pf_strlen(s));
}

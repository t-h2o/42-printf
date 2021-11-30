/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:48:14 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/26 15:49:08 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"
#include	"../libft.h"

#include	<stdio.h>

static int
	ft_flags(const char *s, va_list *arg)
{
	int		sum;

	if (*s == 'd' || *s == 'i')
		sum = ft_putdec((long)va_arg(*arg, int));
	if (*s == 'u')
		sum = ft_putdec((long)(va_arg(*arg, unsigned int)));
	if (*s == 's')
		sum = ft_putstr(va_arg(*arg, char *));
	if (*s == 'c')
		sum = ft_putchar(va_arg(*arg, int));
	if (*s == 'x')
		sum = ft_puthex(va_arg(*arg, unsigned long), 0);
	if (*s == 'X')
		sum = ft_puthex(va_arg(*arg, unsigned long), 1);
	if (*s == 'p')
	{
		ft_putstr_fd("0x", 1);
		sum = ft_puthex(va_arg(*arg, unsigned long), 0) + 2;
	}
	if (*s == '%')
		sum = ft_putchar('%');
	return (sum);
}

int
	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		sum;

	va_start(arg, s);
	sum = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			sum += ft_flags(s, &arg);
		}
		else
			sum += ft_putchar(*s);
		s++;
	}
	va_end(arg);
	return (sum);
}

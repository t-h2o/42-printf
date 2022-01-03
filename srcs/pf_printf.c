/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:48:14 by tgrivel           #+#    #+#             */
/*   Updated: 2022/01/03 13:46:55 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

#include	<stdio.h>

static int
	pf_flags(const char *s, va_list *arg)
{
	int		sum;

	if (*s == 'd' || *s == 'i')
		sum = pf_putdec((long)va_arg(*arg, int));
	if (*s == 'u')
		sum = pf_putdec((long)(va_arg(*arg, unsigned int)));
	if (*s == 's')
		sum = pf_putstr(va_arg(*arg, char *));
	if (*s == 'c')
		sum = pf_putchar(va_arg(*arg, int));
	if (*s == 'x')
		sum = pf_puthex(va_arg(*arg, unsigned int), 0);
	if (*s == 'X')
		sum = pf_puthex(va_arg(*arg, unsigned int), 1);
	if (*s == 'p')
		sum = pf_putadd(va_arg(*arg, unsigned long));
	if (*s == '%')
		sum = pf_putchar('%');
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
			sum += pf_flags(s, &arg);
		}
		else
			sum += pf_putchar(*s);
		s++;
	}
	va_end(arg);
	return (sum);
}

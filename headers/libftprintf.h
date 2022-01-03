/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:05:32 by tgrivel           #+#    #+#             */
/*   Updated: 2022/01/03 12:02:33 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include	<stdarg.h>
# include	<unistd.h>
	// functions

int		ft_printf(const char *s, ...);

int		pf_putstr(char *strtoprint);
//int		pf_intlen(long nbr);
int		pf_putchar(int n);
int		pf_puthex(unsigned int n, int maj);
int		pf_putadd(unsigned long n);
int		pf_putdec(long n);

#endif /* LIBFTPRINTF_H */

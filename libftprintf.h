/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:05:32 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/30 11:18:22 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include	<stdarg.h>

	// functions

int		ft_putstr(char *strtoprint);
int		ft_printf(const char *s, ...);
int		ft_intlen(long nbr);
int		ft_putchar(int n);
int		ft_puthex(unsigned long n, int maj);
int		ft_putdec(long n);

#endif /* LIBFTPRINTF_H */

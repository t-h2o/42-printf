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

#include	"../libft.h"
#include	"../libftprintf.h"

int
	ft_putstr(char *strtoprint)
{
	ft_putstr_fd(strtoprint, 1);
	return (ft_strlen(strtoprint));
}

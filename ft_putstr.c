/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:47:57 by fchanane          #+#    #+#             */
/*   Updated: 2021/12/02 20:47:48 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putstr(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	while (*str)
		ft_putchar(*str++);
}

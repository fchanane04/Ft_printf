/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:10:20 by fchanane          #+#    #+#             */
/*   Updated: 2021/12/02 20:45:17 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putadd(unsigned long nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		ft_putadd(nb / 16);
	ft_putchar(base[nb % 16]);
}

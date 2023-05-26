/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:27:58 by fchanane          #+#    #+#             */
/*   Updated: 2021/12/04 08:52:18 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

void	ft_put_hexa(char c, unsigned int nb)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_put_hexa(c, nb / 16);
		ft_put_hexa(c, nb % 16);
	}
	else
	{
		if (c == 'x')
			ft_putchar(ft_tolower(base[nb]));
		else
			ft_putchar(base[nb]);
	}
}

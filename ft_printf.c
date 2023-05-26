/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:17:20 by fchanane          #+#    #+#             */
/*   Updated: 2021/12/04 09:50:54 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	process(char c, va_list ptr)
{
	if (c == '%')
		ft_putchar('%');
	if (c == 'c')
		ft_putchar(va_arg(ptr, int));
	if (c == 's')
		ft_putstr(va_arg(ptr, char *));
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ptr, int));
	if (c == 'p')
	{
		ft_putstr("0x");
		ft_putadd(va_arg(ptr, unsigned long));
	}
	if (c == 'u')
		ft_put_ung_nbr(va_arg(ptr, unsigned int));
	if (c == 'x' || c == 'X')
		ft_put_hexa(c, va_arg(ptr, unsigned int));
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;

	i = 0;
	g_len = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			process(str[i + 1], ptr);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(ptr);
	return (g_len);
}

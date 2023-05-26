/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ung_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:56:12 by fchanane          #+#    #+#             */
/*   Updated: 2021/12/02 21:14:49 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_put_ung_nbr(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_put_ung_nbr(nb / 10);
		ft_put_ung_nbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:51:28 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 23:33:31 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		nb = nb + 2000000000;
		nb = -nb;
		write(1, "-2", 2);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	c = (nb % 10) + '0';
	if (nb <= 9)
		write(1, &c, 1);
	else
	{
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
}

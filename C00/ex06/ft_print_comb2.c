/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:17:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 22:34:14 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print(int n1, int n2);

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print(i, j);
			j++;
		}
		i++;
	}
}

static void	print(int n1, int n2)
{
	char	c[5];

	c[0] = (n1 / 10) + '0';
	c[1] = (n1 % 10) + '0';
	c[2] = ' ';
	c[3] = (n2 / 10) + '0';
	c[4] = (n2 % 10) + '0';
	if (n1 <= 98 && n2 <= 99)
	{
		write(1, &c, 5);
		if (n1 < 98 && n2 <= 99)
			write(1, ", ", 2);
		else if (n1 == 98 && n2 == 9)
			write(1, "\n", 1);
	}
}

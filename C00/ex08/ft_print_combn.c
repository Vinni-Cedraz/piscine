/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:21:42 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/17 02:11:01 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	aux(int *arr, int col, int n)
{
	int	i;

	while (col)
	{
		while (arr[col] == (9 + col - (n - 1)) && col >= 0)
			col -= 1;
		if (col < 0)
			break ;
		arr[col] += 1;
		i = (col + 1) - 1;
		while (i++ < n)
			arr[i] = arr[i - 1] + 1;
		col = n - 1;
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
		ft_putchar(';');
		ft_putchar(' ');
		ft_putchar('\n');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	col;
	int	arr[10];

	col = n - 1;
	i = -1;
	if (n <= 10)
	{
		while (i++ < n)
			arr[i] = i;
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
		ft_putchar('\0');
		ft_putchar(';');
		ft_putchar('\n');
		aux(arr, col, n);
	}
}

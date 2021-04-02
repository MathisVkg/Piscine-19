/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:04:27 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 12:36:14 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_aff_solve(t_rush t)
{
	int	x;
	int	y;

	y = 0;
	while (y < t.size)
	{
		x = 0;
		while (x < t.size)
		{
			ft_putchar(t.solve[y][x] + '0');
			x++;
			if (x < t.size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}

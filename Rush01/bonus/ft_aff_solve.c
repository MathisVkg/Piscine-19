/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:04:27 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 17:08:18 by groubaud         ###   ########.fr       */
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

void	ft_aff_coord_col(t_rush t, int c)
{
	int	x2;

	x2 = 0;
	ft_putstr("  ");
	while (x2 < t.size)
	{
		ft_putchar(t.coord[c][x2] + '0');
		x2++;
		if (x2 < t.size)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	ft_aff_solve(t_rush t)
{
	int	x;
	int	y;
	int	x2;

	y = 0;
	ft_aff_coord_col(t, 0);
	x2 = 0;
	while (y < t.size)
	{
		x = 0;
		ft_putchar(t.coord[2][x2] + '0');
		ft_putchar(' ');
		while (x < t.size)
		{
			ft_putchar(t.solve[y][x] + '0');
			x++;
			ft_putchar(' ');
		}
		ft_putchar(t.coord[3][x2] + '0');
		x2++;
		ft_putchar('\n');
		y++;
	}
	ft_aff_coord_col(t, 1);
}

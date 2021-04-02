/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_allowed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:03:56 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 12:36:03 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_is_complete_col(t_rush *ptr, int x)
{
	int	y2;
	int	x2;

	y2 = 0;
	x2 = x;
	while (y2 < ptr->size)
	{
		if (ptr->solve[y2][x2] == 0)
			return (0);
		y2++;
	}
	return (1);
}

int	ft_is_complete_row(t_rush *ptr, int y)
{
	int	y2;
	int	x2;

	x2 = 0;
	y2 = y;
	while (x2 < ptr->size)
	{
		if (ptr->solve[y2][x2] == 0)
			return (0);
		x2++;
	}
	return (1);
}

int	ft_check_view(t_rush *ptr, int x, int y)
{
	if ((ft_is_complete_col(ptr, x) == 1)
		&& (ptr->coord[0][x] != ft_view_col1(ptr, x)
		|| ptr->coord[1][x] != ft_view_col2(ptr, x)))
		return (0);
	else if ((ft_is_complete_row(ptr, y) == 1)
		&& (ptr->coord[2][y] != ft_view_row1(ptr, y)
		|| ptr->coord[3][y] != ft_view_row2(ptr, y)))
		return (0);
	return (1);
}

int	ft_check_allowed(t_rush *ptr, int x, int y)
{
	int	c;
	int	y2;
	int	x2;

	y2 = 0;
	x2 = x;
	c = ptr->solve[y][x];
	if (c == 0 || c > ptr->size)
		return (0);
	while (y2 < ptr->size)
	{
		if (ptr->solve[y2][x2] == c && y2 != y)
			return (0);
		y2++;
	}
	x2 = 0;
	y2 = y;
	while (x2 < ptr->size)
	{
		if (ptr->solve[y2][x2] == c && x2 != x)
			return (0);
		x2++;
	}
	return (ft_check_view(ptr, x, y));
}

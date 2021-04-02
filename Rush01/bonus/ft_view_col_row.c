/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_view_col_row.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:35:52 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 12:21:18 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_view_col1(t_rush *ptr, int x)
{
	int	y2;
	int	top;
	int	view;

	y2 = 0;
	top = 0;
	view = 0;
	while (y2 < ptr->size)
	{
		if (ptr->solve[y2][x] > top)
		{
			view++;
			top = ptr->solve[y2][x];
		}
		y2++;
	}
	return (view);
}

int	ft_view_col2(t_rush *ptr, int x)
{
	int	y2;
	int	top;
	int	view;

	y2 = ptr->size - 1;
	top = 0;
	view = 0;
	while (y2 >= 0)
	{
		if (ptr->solve[y2][x] > top)
		{
			view++;
			top = ptr->solve[y2][x];
		}
		y2--;
	}
	return (view);
}

int	ft_view_row1(t_rush *ptr, int y)
{
	int	x2;
	int	top;
	int	view;

	x2 = 0;
	top = 0;
	view = 0;
	while (x2 < ptr->size)
	{
		if (ptr->solve[y][x2] > top)
		{
			view++;
			top = ptr->solve[y][x2];
		}
		x2++;
	}
	return (view);
}

int	ft_view_row2(t_rush *ptr, int y)
{
	int	x2;
	int	top;
	int	view;

	x2 = ptr->size - 1;
	top = 0;
	view = 0;
	while (x2 >= 0)
	{
		if (ptr->solve[y][x2] > top)
		{
			view++;
			top = ptr->solve[y][x2];
		}
		x2--;
	}
	return (view);
}

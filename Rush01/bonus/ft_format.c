/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:11:09 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 12:35:05 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_coord_is_special(t_rush *ptr, int x, int y)
{
	if ((x == 0 && ptr->coord[2][y] == 1)
		|| (y == 0 && ptr->coord[0][x] == 1)
		|| (x == ptr->size - 1 && ptr->coord[3][y] == 1)
		|| (y == ptr->size - 1 && ptr->coord[1][x] == 1))
		return (ptr->size);
	else if (ptr->coord[0][x] == ptr->size)
		return (y + 1);
	else if (ptr->coord[1][x] == ptr->size)
		return (ptr->size - y);
	else if (ptr->coord[2][y] == ptr->size)
		return (x + 1);
	else if (ptr->coord[3][y] == ptr->size)
		return (ptr->size - x);
	else
		return (0);
}

int		ft_create_solve_tab(t_rush *ptr)
{
	int		y;
	int		x;

	y = 0;
	if (!(ptr->solve = malloc(sizeof(*(ptr->solve)) * ptr->size)))
		return (0);
	while (y < ptr->size)
	{
		if (!(ptr->solve[y] = malloc(sizeof(*(ptr->solve[y])) * ptr->size)))
			return (0);
		x = 0;
		while (x < ptr->size)
		{
			ptr->solve[y][x] = ft_coord_is_special(ptr, x, y);
			x++;
		}
		y++;
	}
	return (1);
}

int		ft_set_coord(t_rush *ptr, char *str)
{
	int		x;
	int		y;
	int		i;

	if (!(ptr->coord = malloc(sizeof(*(ptr->coord)) * 4)))
		return (0);
	y = 0;
	i = 0;
	while (y < 4)
	{
		if (!(ptr->coord[y] = malloc(sizeof(*(ptr->coord[y])) * ptr->size)))
			return (0);
		x = 0;
		while (x < ptr->size)
		{
			ptr->coord[y][x] = str[i] - '0';
			x++;
			i = i + 2;
		}
		y++;
	}
	return (1);
}

t_rush	*ft_format(char *str)
{
	t_rush	*ptr;

	if (!(ptr = malloc(sizeof(*ptr))))
		return (0);
	ptr->size = (ft_strlen(str) + 1) / 8;
	if (ft_set_coord(ptr, str) == 0)
		return (0);
	if (!(ft_create_solve_tab(ptr)))
		return (0);
	return (ptr);
}

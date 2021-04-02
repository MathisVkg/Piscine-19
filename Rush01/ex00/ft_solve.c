/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:19:05 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/22 11:06:45 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_the_good_number(t_rush *ptr, int *x, int *y)
{
	while (*x >= 0 && ft_check_allowed(ptr, *x, *y) == 0) //si checkallo return 0, rentre dans boucle et cherche nbr
	{
		if (ptr->solve[*y][*x] < ptr->size)
			ptr->solve[*y][*x]++;
		else
		{
			ptr->solve[*y][*x] = 0;
			if (*x == 0 && *y == 0)
				return (0);
			else if (*x == 0)
			{
				*y = *y - 1;
				*x = ptr->size - 1;
			}
			else
				*x = *x - 1;
			ptr->solve[*y][*x]++;
		}
	}
	return (1); //checkallo correcte
}

int		ft_solve(t_rush *ptr)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (y < ptr->size)
	{
		if (ft_the_good_number(ptr, &x, &y) == 0)
			return (0);
		if (x < 0)
			return (0);
		else if (x == ptr->size - 1) //si x bout de ligne alors etage suivant
		{
			x = 0;
			y++;
		}
		else
			x++;
	}
	return (1);
}

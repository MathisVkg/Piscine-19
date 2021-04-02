/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:43:30 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/25 15:30:17 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	while ((min + i) < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

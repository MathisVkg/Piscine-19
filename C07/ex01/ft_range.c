/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:12:20 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/23 21:55:57 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (max <= min)
		return (0);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	while ((min + i) < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

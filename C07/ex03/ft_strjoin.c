/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:43:10 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/25 15:30:09 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		m;
	char	*tab;

	i = 0;
	m = 0;
	if (!(tab = malloc(sizeof(strs))))
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[m] = strs[i][j];
			m++;
			j++;
		}
		j = 0;
		while (sep[j] && i < (size - 1))
			tab[m++] = sep[j++];
		i++;
	}
	tab[m] = '\0';
	return (tab);
}

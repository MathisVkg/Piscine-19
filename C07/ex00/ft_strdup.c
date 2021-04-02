/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:50:23 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/25 15:07:24 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		leng;
	int		m;

	leng = 0;
	m = 0;
	while (src[leng] != '\0')
		leng++;
	dest = malloc(sizeof(char) * leng + 1);
	if (!(dest = malloc(sizeof(char) * leng + 1)))
		return (0);
	while (m < leng)
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}

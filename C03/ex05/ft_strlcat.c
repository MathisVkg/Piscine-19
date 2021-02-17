/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:44:54 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/17 09:10:02 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	unsigned int a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int p;
	unsigned int m;

	m = 0;
	p = ft_strlen(dest);
	if (p > size)
	{
		return (ft_strlen(src) + size);
	}
	while (src[m] && m + p < size - 1)
	{
		dest[p++] = src[m++];
	}
	dest[p] = '\0';
	return (ft_strlen(src) + p);
}
